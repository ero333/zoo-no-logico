using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeletePlayerPrefs : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void Delete() {

        PlayerPrefs.DeleteAll();
        print("Deleted");



        PlayerPrefs.SetInt("Jaula1", 89);
        PlayerPrefs.SetInt("Jaula2", 89);
        PlayerPrefs.SetInt("Jaula3", 89);
        PlayerPrefs.SetInt("Jaula4", 89);
        PlayerPrefs.SetInt("Jaula5", 89);

        PlayerPrefs.SetInt("Moneditas", 12500);

        PlayerPrefs.SetInt("Popularidad", 20);

        PlayerPrefs.SetInt("CantidadCarpincho", 1);
        PlayerPrefs.SetInt("CantidadArana", 1);
        PlayerPrefs.SetInt("CantidadCocodrilo", 1);
        PlayerPrefs.SetInt("CantidadZorro", 1);
        PlayerPrefs.SetInt("CantidadMurcielago", 0);
        PlayerPrefs.SetInt("CantidadSerpiente", 0);
        PlayerPrefs.SetInt("CantidadAve", 0);
    }
}
