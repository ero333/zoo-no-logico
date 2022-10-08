using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SaveManager : MonoBehaviour{

    popularityTest popularidad;
    MoneySetter monedas;

    int popularidadValue;
    int monedasValue;

    // Use this for initialization
    void Start () {
        popularidad = FindObjectOfType<popularityTest>();
        monedas = FindObjectOfType<MoneySetter>();
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    public void SaveGame()
    {
        SaveSystem.SaveGame(popularidad, monedas);
    }

    public void LoadGame()
    {
        GameData data = SaveSystem.LoadGame();
        
        popularidadValue = data.popularidad_save;
        PlayerPrefs.SetInt("Popularidad", popularidadValue);

        monedasValue = data.monedas_save;
        PlayerPrefs.SetInt("Moneditas", monedasValue);

        PlayerPrefs.SetInt("CantidadCarpincho", data.cant_carpincho);
        PlayerPrefs.SetInt("CantidadArana", data.cant_arana);
        PlayerPrefs.SetInt("CantidadCocodrilo", data.cant_cocodrilo);
        PlayerPrefs.SetInt("CantidadZorro", data.cant_zorro);
        PlayerPrefs.SetInt("CantidadMurcielago", data.cant_murcielago);
        PlayerPrefs.SetInt("CantidadSerpiente", data.cant_serpiente);
        PlayerPrefs.SetInt("CantidadAve", data.cant_ave);

        PlayerPrefs.SetString("Jaula1", data.jaula1);
    }
}
