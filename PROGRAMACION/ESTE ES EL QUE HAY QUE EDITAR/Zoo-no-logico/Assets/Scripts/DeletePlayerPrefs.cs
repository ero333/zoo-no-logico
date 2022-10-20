using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DeletePlayerPrefs : MonoBehaviour {

    public Button continuar;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

        if (PlayerPrefs.GetInt("Dias") == 0){
            continuar.interactable = false;
        }
        else{
            continuar.interactable = true;
        }
	}

    public void Delete() {

        PlayerPrefs.DeleteAll();
        print("Deleted");



        //PlayerPrefs.SetInt("Jaula1", 89);
        //PlayerPrefs.SetInt("Jaula2", 89);
        //PlayerPrefs.SetInt("Jaula3", 89);
        //PlayerPrefs.SetInt("Jaula4", 89);
        //PlayerPrefs.SetInt("Jaula5", 89);

        PlayerPrefs.SetInt("Moneditas", 12500);

        PlayerPrefs.SetInt("Popularidad", 20);

        PlayerPrefs.SetInt("CantidadCarpincho", 1);
        PlayerPrefs.SetInt("CantidadArana", 0);
        PlayerPrefs.SetInt("CantidadCocodrilo", 1);
        PlayerPrefs.SetInt("CantidadZorro", 1);
        PlayerPrefs.SetInt("CantidadMurcielago", 0);
        PlayerPrefs.SetInt("CantidadSerpiente", 0);
        PlayerPrefs.SetInt("CantidadAve", 0);
        PlayerPrefs.SetString("PrimeraCombinacion", "true");

        for (int i = 0; i < 20; i++)
        {
            PlayerPrefs.SetInt("Jaula" + i, 89);
        }

        PlayerPrefs.SetInt("ResetListCartas", 0);
        PlayerPrefs.SetInt("EventoCartas", 0);
        PlayerPrefs.SetInt("DesactivarNoti", 0);
    }
}
