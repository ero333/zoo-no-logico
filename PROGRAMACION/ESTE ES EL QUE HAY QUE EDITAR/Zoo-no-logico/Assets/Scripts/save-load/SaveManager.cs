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

        PlayerPrefs.SetString("Jaula0", data.jaula0);
        PlayerPrefs.SetString("Jaula1", data.jaula1);
        PlayerPrefs.SetString("Jaula2", data.jaula2);
        PlayerPrefs.SetString("Jaula3", data.jaula3);
        PlayerPrefs.SetString("Jaula4", data.jaula4);
        PlayerPrefs.SetString("Jaula5", data.jaula5);
        PlayerPrefs.SetString("Jaula6", data.jaula6);
        PlayerPrefs.SetString("Jaula7", data.jaula7);
        PlayerPrefs.SetString("Jaula8", data.jaula8);
        PlayerPrefs.SetString("Jaula9", data.jaula9);
        PlayerPrefs.SetString("Jaula10", data.jaula10);
        PlayerPrefs.SetString("Jaula11", data.jaula11);
        PlayerPrefs.SetString("Jaula12", data.jaula12);
        PlayerPrefs.SetString("Jaula13", data.jaula13);
        PlayerPrefs.SetString("Jaula14", data.jaula14);
        PlayerPrefs.SetString("Jaula15", data.jaula15);
        PlayerPrefs.SetString("Jaula16", data.jaula16);
        PlayerPrefs.SetString("Jaula17", data.jaula17);
        PlayerPrefs.SetString("Jaula18", data.jaula18);
        PlayerPrefs.SetString("Jaula19", data.jaula19);

        PlayerPrefs.SetInt("JaulaActiva0", data.jaula_activa_0);
        PlayerPrefs.SetInt("JaulaActiva1", data.jaula_activa_1);
        PlayerPrefs.SetInt("JaulaActiva2", data.jaula_activa_2);
        PlayerPrefs.SetInt("JaulaActiva3", data.jaula_activa_3);
        PlayerPrefs.SetInt("JaulaActiva4", data.jaula_activa_4);
        PlayerPrefs.SetInt("JaulaActiva5", data.jaula_activa_5);
        PlayerPrefs.SetInt("JaulaActiva6", data.jaula_activa_6);
        PlayerPrefs.SetInt("JaulaActiva7", data.jaula_activa_7);
        PlayerPrefs.SetInt("JaulaActiva8", data.jaula_activa_8);
        PlayerPrefs.SetInt("JaulaActiva9", data.jaula_activa_9);
        PlayerPrefs.SetInt("JaulaActiva10", data.jaula_activa_10);
        PlayerPrefs.SetInt("JaulaActiva11", data.jaula_activa_11);
        PlayerPrefs.SetInt("JaulaActiva12", data.jaula_activa_12);
        PlayerPrefs.SetInt("JaulaActiva13", data.jaula_activa_13);
        PlayerPrefs.SetInt("JaulaActiva14", data.jaula_activa_14);
        PlayerPrefs.SetInt("JaulaActiva15", data.jaula_activa_15);
        PlayerPrefs.SetInt("JaulaActiva16", data.jaula_activa_16);
        PlayerPrefs.SetInt("JaulaActiva17", data.jaula_activa_17);
        PlayerPrefs.SetInt("JaulaActiva18", data.jaula_activa_18);
        PlayerPrefs.SetInt("JaulaActiva19", data.jaula_activa_19);

        PlayerPrefs.SetInt("JaulasOcupadas", data.jaulas_ocupadas);
        PlayerPrefs.SetInt("Dias", data.Dias);

        PlayerPrefs.SetInt("Cruza1", data.cruza1);
    }
}
