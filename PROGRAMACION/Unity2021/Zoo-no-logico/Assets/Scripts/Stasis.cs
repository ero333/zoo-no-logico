using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Stasis : MonoBehaviour {

    public GameObject cruza;

    public int[] StasisActivas = new int[] { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    // Use this for initialization
    void Start () {
        for (int i = 0; i < StasisActivas.Length; i++)
        {
            StasisActivas[i] = PlayerPrefs.GetInt("StasisActiva" + i);
        }
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    public void AddAnimalToStasis ()
    {
        Image cruza_img = cruza.GetComponent<Image>();

        int index = PlayerPrefs.GetInt("CantidadCruzasEnStasis");

        int selectedStasisSlot = -1;

        for (int i = 0; i < StasisActivas.Length; i++)
        {
            if ((StasisActivas[i] == 0) && selectedStasisSlot == -1)
            {
                StasisActivas[i] = 1;
                PlayerPrefs.SetInt("StasisActiva" + i, 1);
                selectedStasisSlot = i;
                PlayerPrefs.SetString("Stasis" + i, cruza_img.sprite.name);
            }
        }

        PlayerPrefs.SetInt("CantidadCruzasEnStasis", PlayerPrefs.GetInt("CantidadCruzasEnStasis") + 1);
        PlayerPrefs.SetInt("totalStasis", PlayerPrefs.GetInt("totalStasis") + 1);

    }
}
