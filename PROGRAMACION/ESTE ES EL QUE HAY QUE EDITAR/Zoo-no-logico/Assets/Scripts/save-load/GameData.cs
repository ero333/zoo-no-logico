using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class GameData {

    public int popularidad_save;

    public int monedas_save;

    public int cant_carpincho;
    public int cant_arana;
    public int cant_cocodrilo;
    public int cant_zorro;
    public int cant_murcielago;
    public int cant_serpiente;
    public int cant_ave;

    public GameData (popularityTest popularidad, MoneySetter monedas)
    {
        popularidad_save = popularidad.popularidad;

        monedas_save = monedas.Monedas;

        cant_carpincho = PlayerPrefs.GetInt("CantidadCarpincho");
        cant_arana = PlayerPrefs.GetInt("CantidadArana");
        cant_cocodrilo = PlayerPrefs.GetInt("CantidadCocodrilo");
        cant_zorro = PlayerPrefs.GetInt("CantidadZorro");
        cant_murcielago = PlayerPrefs.GetInt("CantidadMurcielago");
        cant_serpiente = PlayerPrefs.GetInt("CantidadSerpiente");
        cant_ave = PlayerPrefs.GetInt("CantidadAve");
    }
}
