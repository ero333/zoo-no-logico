using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class SellAnimal : MonoBehaviour {

    int plataTotal;
    int nuevaPlata;

    [SerializeField] GameObject smCanvas;
    StasisManager sm;

    [SerializeField] Button button;

    //public int[] StasisActivas = new int[] { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    void Awake()
    {
        sm = smCanvas.GetComponent<StasisManager>();
    }

    // Use this for initialization
    void Start () {


    }
	
	// Update is called once per frame
	void Update () {
        plataTotal = PlayerPrefs.GetInt("Moneditas");
        nuevaPlata = PlayerPrefs.GetInt("plataCurrentCruza");

        int pos = PlayerPrefs.GetInt("StasisPosition");
        if (sm.StasisActivas[pos] == 1)
        {
            button.interactable = true;
        } else
        {
            button.interactable = false;
        }
    }

    public void Vender()
    {
        plataTotal = plataTotal + nuevaPlata;
        PlayerPrefs.SetInt("Moneditas", plataTotal);
        PlayerPrefs.SetString("Stasis" + PlayerPrefs.GetInt("StasisPosition").ToString() , "");
        PlayerPrefs.SetInt("StasisActiva" + PlayerPrefs.GetInt("StasisPosition").ToString(), 0);
        PlayerPrefs.SetInt("CantidadCruzasEnStasis", PlayerPrefs.GetInt("CantidadCruzasEnStasis") - 1);
        PlayerPrefs.SetInt("totalVendidos", PlayerPrefs.GetInt("totalVendidos") + 1);


    }

    public void Sacar()
    {
        //int pos = PlayerPrefs.GetInt("StasisPosition");
        //if (sm.StasisActivas[pos] == 1)
        //{
        int pos = PlayerPrefs.GetInt("StasisPosition");
        PlayerPrefs.SetInt("indexCurrentCruza", int.Parse(PlayerPrefs.GetString("Stasis" + pos)));

            PlayerPrefs.SetInt("StasisActiva" + PlayerPrefs.GetInt("StasisPosition").ToString(), 0);
            PlayerPrefs.SetInt("CantidadCruzasEnStasis", PlayerPrefs.GetInt("CantidadCruzasEnStasis") - 1);
            PlayerPrefs.SetString("Stasis" + PlayerPrefs.GetInt("StasisPosition").ToString(), "");
        //} else
        //{
        //    Debug.LogError("no se puede extraer porque no hay animal");
        //}
        

    }
}
