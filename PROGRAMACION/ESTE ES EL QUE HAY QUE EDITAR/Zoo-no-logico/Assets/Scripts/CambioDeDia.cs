﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CambioDeDia : MonoBehaviour {


    public Text textoTurno;
    public int numTurno;
    public GameObject Pantalla;

	// Use this for initialization
	void Start () {
        textoTurno = GameObject.FindGameObjectWithTag("TextoDias").GetComponent<Text>();
        numTurno = PlayerPrefs.GetInt("Dias");
    }
	
	// Update is called once per frame
	void Update () {
		textoTurno.text = numTurno.ToString();

	}


    public void Pasar()
    {
        numTurno++;
        textoTurno.text = numTurno.ToString();
        Pantalla.SetActive(false);
        PlayerPrefs.SetInt("Dias", numTurno);
    }

    public void AbrirPantalla()
    {
        Pantalla.SetActive(true);
    }
}

