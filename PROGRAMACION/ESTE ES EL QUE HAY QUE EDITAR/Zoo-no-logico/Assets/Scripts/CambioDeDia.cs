using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CambioDeDia : MonoBehaviour {


    public Text textoTurno;
    public int numTurno;
    public GameObject Pantalla;
    public GameObject PantallaPostEvento;

    public GameObject PantallaGanar;
    public int Popularidad;

    // Use this for initialization
    void Start () {
        textoTurno = GameObject.FindGameObjectWithTag("TextoDias").GetComponent<Text>();
        
    }
	
	// Update is called once per frame
	void Update () {
        numTurno = PlayerPrefs.GetInt("Dias");
        textoTurno.text = numTurno.ToString();
        Popularidad = PlayerPrefs.GetInt("Popularidad");
    }


    public void Pasar()
    {
        if (!PantallaPostEvento)
        {
            numTurno++;
            textoTurno.text = numTurno.ToString();
            Pantalla.SetActive(false);
            PlayerPrefs.SetInt("Dias", numTurno);
        }
        else
        {
            Pantalla.SetActive(false);
        }
    }

    public void AbrirPantalla()
    {
        if (Popularidad >= 100)
        {
            PantallaGanar.SetActive(true);
        }
        else
        {
            Pantalla.SetActive(true);
        }

    }

    public void OnPantallaPostEvento()
    {
        if (PantallaPostEvento)
        {
            PantallaPostEvento.SetActive(true);
        }
    }
}


