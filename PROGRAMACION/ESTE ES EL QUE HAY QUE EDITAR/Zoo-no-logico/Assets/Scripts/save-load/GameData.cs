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

    public string jaula0;
    public string jaula1;
    public string jaula2;
    public string jaula3;
    public string jaula4;
    public string jaula5;
    public string jaula6;
    public string jaula7;
    public string jaula8;
    public string jaula9;
    public string jaula10;
    public string jaula11;
    public string jaula12;
    public string jaula13;
    public string jaula14;
    public string jaula15;
    public string jaula16;
    public string jaula17;
    public string jaula18;
    public string jaula19;

    public int jaula_activa_0;
    public int jaula_activa_1;
    public int jaula_activa_2;
    public int jaula_activa_3;
    public int jaula_activa_4;
    public int jaula_activa_5;
    public int jaula_activa_6;
    public int jaula_activa_7;
    public int jaula_activa_8;
    public int jaula_activa_9;
    public int jaula_activa_10;
    public int jaula_activa_11;
    public int jaula_activa_12;
    public int jaula_activa_13;
    public int jaula_activa_14;
    public int jaula_activa_15;
    public int jaula_activa_16;
    public int jaula_activa_17;
    public int jaula_activa_18;
    public int jaula_activa_19;

    public int jaulas_ocupadas;

    public int Dias;

    public int cruza1;

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

        jaula0 = PlayerPrefs.GetString("Jaula0");
        jaula1 = PlayerPrefs.GetString("Jaula1");
        jaula2 = PlayerPrefs.GetString("Jaula2");
        jaula3 = PlayerPrefs.GetString("Jaula3");
        jaula4 = PlayerPrefs.GetString("Jaula4");
        jaula5 = PlayerPrefs.GetString("Jaula5");
        jaula6 = PlayerPrefs.GetString("Jaula6");
        jaula7 = PlayerPrefs.GetString("Jaula7");
        jaula8 = PlayerPrefs.GetString("Jaula8");
        jaula9 = PlayerPrefs.GetString("Jaula9");
        jaula10 = PlayerPrefs.GetString("Jaula10");
        jaula11 = PlayerPrefs.GetString("Jaula11");
        jaula12 = PlayerPrefs.GetString("Jaula12");
        jaula13 = PlayerPrefs.GetString("Jaula13");
        jaula14 = PlayerPrefs.GetString("Jaula14");
        jaula15 = PlayerPrefs.GetString("Jaula15");
        jaula16 = PlayerPrefs.GetString("Jaula16");
        jaula17 = PlayerPrefs.GetString("Jaula17");
        jaula18 = PlayerPrefs.GetString("Jaula18");
        jaula19 = PlayerPrefs.GetString("Jaula19");

        jaula_activa_0 = PlayerPrefs.GetInt("JaulaActiva0");
        jaula_activa_1 = PlayerPrefs.GetInt("JaulaActiva1");
        jaula_activa_2 = PlayerPrefs.GetInt("JaulaActiva2");
        jaula_activa_3 = PlayerPrefs.GetInt("JaulaActiva3");
        jaula_activa_4 = PlayerPrefs.GetInt("JaulaActiva4");
        jaula_activa_5 = PlayerPrefs.GetInt("JaulaActiva5");
        jaula_activa_6 = PlayerPrefs.GetInt("JaulaActiva6");
        jaula_activa_7 = PlayerPrefs.GetInt("JaulaActiva7");
        jaula_activa_8 = PlayerPrefs.GetInt("JaulaActiva8");
        jaula_activa_9 = PlayerPrefs.GetInt("JaulaActiva9");
        jaula_activa_10 = PlayerPrefs.GetInt("JaulaActiva10");
        jaula_activa_11 = PlayerPrefs.GetInt("JaulaActiva11");
        jaula_activa_12 = PlayerPrefs.GetInt("JaulaActiva12");
        jaula_activa_13 = PlayerPrefs.GetInt("JaulaActiva13");
        jaula_activa_14 = PlayerPrefs.GetInt("JaulaActiva14");
        jaula_activa_15 = PlayerPrefs.GetInt("JaulaActiva15");
        jaula_activa_16 = PlayerPrefs.GetInt("JaulaActiva16");
        jaula_activa_17 = PlayerPrefs.GetInt("JaulaActiva17");
        jaula_activa_18 = PlayerPrefs.GetInt("JaulaActiva18");
        jaula_activa_19 = PlayerPrefs.GetInt("JaulaActiva19");

        jaulas_ocupadas = PlayerPrefs.GetInt("JaulasOcupadas");

        Dias = PlayerPrefs.GetInt("Dias");

        cruza1 = PlayerPrefs.GetInt("Cruza1");



    }
}
