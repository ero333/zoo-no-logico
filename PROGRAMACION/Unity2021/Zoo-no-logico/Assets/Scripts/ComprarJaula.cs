using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ComprarJaula : MonoBehaviour {

    [SerializeField] private GameObject cruza;
    public string cruza_num;

    // Use this for initialization
    void Start () {
        
    }
	
	// Update is called once per frame
	void Update () {
        
	}

    public void ComprarJaulaTest ()
    {
        cruza_num = cruza.GetComponent<Image>().sprite.name;
        //PlayerPrefs.SetString("Jaula" + PlayerPrefs.GetInt("JaulasOcupadas"), cruza_num);
        
        PlayerPrefs.SetInt("JaulasOcupadas", PlayerPrefs.GetInt("JaulasOcupadas") + 1);
        //print(PlayerPrefs.GetInt("JaulasOcupadas"));

        Jaula JManager = FindObjectOfType<Jaula>();

        int selectedActiveIndex = -1;
        

        for (int i = 0; i < JManager.JaulasActivas.Length; i++)
        {
            if (i != 0 && JManager.JaulasActivas[i] == 0 && selectedActiveIndex == -1)
            {

                selectedActiveIndex = i;

            }
            else if (i == 0 && JManager.JaulasActivas[i] == 0 && selectedActiveIndex == -1)
            {

                selectedActiveIndex = i;
            }
        }

        JManager.JaulasActivas[selectedActiveIndex] = 1;
        PlayerPrefs.SetInt("JaulaActiva" + selectedActiveIndex, 1);

        PlayerPrefs.SetString("Jaula" + selectedActiveIndex, cruza_num);
    }
}
