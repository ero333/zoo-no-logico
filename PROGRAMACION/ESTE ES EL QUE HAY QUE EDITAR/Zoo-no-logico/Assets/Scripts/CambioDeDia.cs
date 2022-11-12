using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CambioDeDia : MonoBehaviour {


    public Text textoTurno;
    public int numTurno;
    public GameObject Pantalla;
    public GameObject PantallaPostEvento;
    public GameObject PantallaPerder;
    public GameObject PantallaGanar;
    public int Popularidad;
    public GameObject PopularidadBarra;

    // Use this for initialization
    void Start() {
        textoTurno = GameObject.FindGameObjectWithTag("TextoDias").GetComponent<Text>();

    }

    // Update is called once per frame
    void Update() {
        numTurno = PlayerPrefs.GetInt("Dias");
        textoTurno.text = "DIA: " + numTurno.ToString();
        Popularidad = PlayerPrefs.GetInt("Popularidad");

        if (Popularidad > 25 && PlayerPrefs.GetInt("aranaDesbloqueada") == 0)
        {
            PlayerPrefs.SetInt("aranaDesbloqueada", 1);
            PlayerPrefs.SetInt("CantidadArana", PlayerPrefs.GetInt("CantidadArana") + 1);

        }
        if (Popularidad > 35 && PlayerPrefs.GetInt("aveDesbloqueada") == 0)
        {
            PlayerPrefs.SetInt("aveDesbloqueada", 1);
            PlayerPrefs.SetInt("CantidadAve", PlayerPrefs.GetInt("CantidadAve") + 1);
        }
        if (Popularidad > 50 && PlayerPrefs.GetInt("serpienteDesbloqueada") == 0)
        {
            PlayerPrefs.SetInt("serpienteDesbloqueada", 1);
            PlayerPrefs.SetInt("CantidadSerpiente", PlayerPrefs.GetInt("CantidadSerpiente") + 1);
        }

        PlayerPrefs.SetString("Slot1", "");
        PlayerPrefs.SetString("Slot2", "");
        PlayerPrefs.SetString("Slot3", "");
    }


    public void Pasar()
    {
        if (!PantallaPostEvento)
        {
            numTurno++;
            textoTurno.text = "DIA: " + numTurno.ToString();
            Pantalla.SetActive(false);
            PlayerPrefs.SetInt("Dias", numTurno);
            PopularidadBarra.SetActive(true);
            PlayerPrefs.SetInt("EventoCartas", 1);
        }
        else
        {
            Pantalla.SetActive(false);
            PlayerPrefs.SetInt("ImpuestoXDiasSinCruzas", PlayerPrefs.GetInt("ImpuestoXDiasSinCruzas"));
        }
    }

    public void AbrirPantalla()
    {
        int Random1= new System.Random().Next(0, 20);
        int Random2 = new System.Random().Next(0, 20);
        int Random3 = new System.Random().Next(1, 13);

        PlayerPrefs.SetInt("comentarioRandom1", Random1);
        PlayerPrefs.SetInt("comentarioRandom2", Random2);
        PlayerPrefs.SetInt("avatarRandom", Random3);

        if (Popularidad >= 100 && PlayerPrefs.GetInt("Ganaste")==0)
        {
            PantallaGanar.SetActive(true);
            PlayerPrefs.SetInt("Ganaste", 1);
        }
        else if (Popularidad <= 0 && PlayerPrefs.GetInt("Ganaste") == 0)
        {
            PantallaPerder.SetActive(true);
        }
        else 
        {
            Pantalla.SetActive(true);
            PopularidadBarra.SetActive(false);
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


