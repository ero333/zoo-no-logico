using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RandomPercent : MonoBehaviour {

    public float PerCent;

	// Use this for initialization
	void Start () {
        if (PlayerPrefs.GetString("PrimeraCombinacion") == "false") {
        PerCent = Random.Range(0, 100);
        PlayerPrefs.SetFloat("Porcentaje", PerCent);
        }
        else
        {
            PlayerPrefs.SetFloat("Porcentaje", 1);
        }
    }
	
	// Update is called once per frame
	void Update () {
        
    }

    public void ShowPercent()
    {
    }
}
