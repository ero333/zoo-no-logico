using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SellAnimal : MonoBehaviour {

    int plataTotal;
    int nuevaPlata;

	// Use this for initialization
	void Start () {
        
	}
	
	// Update is called once per frame
	void Update () {
        plataTotal = PlayerPrefs.GetInt("Moneditas");
        nuevaPlata = PlayerPrefs.GetInt("plataCurrentCruza");
    }

    public void Vender()
    {
        plataTotal = plataTotal + nuevaPlata;
        PlayerPrefs.SetInt("Moneditas", plataTotal);
        PlayerPrefs.SetString("Stasis" + PlayerPrefs.GetInt("StasisPosition").ToString() , "");
        PlayerPrefs.SetInt("StasisActiva" + PlayerPrefs.GetInt("StasisPosition").ToString(), 0);
        PlayerPrefs.SetInt("CantidadCruzasEnStasis", PlayerPrefs.GetInt("CantidadCruzasEnStasis") - 1);
    }

    public void Sacar()
    {
        PlayerPrefs.SetInt("indexCurrentCruza", int.Parse(PlayerPrefs.GetString("Stasis" + PlayerPrefs.GetInt("StasisPosition"))));

        PlayerPrefs.SetInt("StasisActiva" + PlayerPrefs.GetInt("StasisPosition").ToString(), 0);
        PlayerPrefs.SetInt("CantidadCruzasEnStasis", PlayerPrefs.GetInt("CantidadCruzasEnStasis") - 1);
        PlayerPrefs.SetString("Stasis" + PlayerPrefs.GetInt("StasisPosition").ToString(), "");

    }
}
