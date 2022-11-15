using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheatCodes : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

        if (Input.GetKeyDown("p"))
        {
            PlayerPrefs.SetInt("Popularidad", PlayerPrefs.GetInt("Popularidad") + 5);
        }

        if (Input.GetKeyDown("o")){
            PlayerPrefs.SetInt("Popularidad", PlayerPrefs.GetInt("Popularidad") -5);
        }

        if (Input.GetKeyDown("m"))
        {
            PlayerPrefs.SetInt("Moneditas", PlayerPrefs.GetInt("Moneditas") + 10000);
        }

        if (Input.GetKeyDown("n"))
        {
            PlayerPrefs.SetInt("Moneditas", PlayerPrefs.GetInt("Moneditas") - 10000);
        }

    }
}
