using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CantidadAnimales : MonoBehaviour {


    public Text TextoCantidadCarpincho;
    public Text TextoCantidadArana;
    public Text TextoCantidadCocodrilo;
    public Text TextoCantidadZorro;
    public Text TextoCantidadMurcielago;
    public Text TextoCantidadSerpiente;
    public Text TextoCantidadAve;
    public int CantidadCarpincho;
    public int CantidadArana;
    public int CantidadCocodrilo;
    public int CantidadZorro;
    public int CantidadMurcielago;
    public int CantidadSerpiente;
    public int CantidadAve;

    // Use this for initialization
    void Start () {

        CantidadCarpincho = PlayerPrefs.GetInt("CantidadCarpincho");
        CantidadArana = PlayerPrefs.GetInt("CantidadArana");
        CantidadCocodrilo = PlayerPrefs.GetInt("CantidadCocodrilo");
        CantidadZorro = PlayerPrefs.GetInt("CantidadZorro");
        CantidadMurcielago = PlayerPrefs.GetInt("CantidadMurcielago");
        CantidadSerpiente = PlayerPrefs.GetInt("CantidadSerpiente");
        CantidadAve = PlayerPrefs.GetInt("CantidadAve");


    }
	
	// Update is called once per frame
	void Update () {
        TextoCantidadCarpincho = GameObject.FindGameObjectWithTag("CantidadCarpincho").GetComponent<Text>();
        TextoCantidadCarpincho.text = CantidadCarpincho.ToString();

        TextoCantidadArana = GameObject.FindGameObjectWithTag("CantidadArana").GetComponent<Text>();
        TextoCantidadArana.text = CantidadArana.ToString();

        TextoCantidadCocodrilo = GameObject.FindGameObjectWithTag("CantidadCocodrilo").GetComponent<Text>();
        TextoCantidadCocodrilo.text = CantidadCocodrilo.ToString();

        TextoCantidadZorro = GameObject.FindGameObjectWithTag("CantidadZorro").GetComponent<Text>();
        TextoCantidadZorro.text = CantidadZorro.ToString();

        TextoCantidadMurcielago = GameObject.FindGameObjectWithTag("CantidadMurcielago").GetComponent<Text>();
        TextoCantidadMurcielago.text = CantidadMurcielago.ToString();

        TextoCantidadSerpiente = GameObject.FindGameObjectWithTag("CantidadSerpiente").GetComponent<Text>();
        TextoCantidadSerpiente.text = CantidadSerpiente.ToString();

        TextoCantidadAve = GameObject.FindGameObjectWithTag("CantidadAve").GetComponent<Text>();
        TextoCantidadAve.text = CantidadAve.ToString();


        CantidadCarpincho = PlayerPrefs.GetInt("CantidadCarpincho");
        CantidadArana = PlayerPrefs.GetInt("CantidadArana");
        CantidadCocodrilo = PlayerPrefs.GetInt("CantidadCocodrilo");
        CantidadZorro = PlayerPrefs.GetInt("CantidadZorro");
        CantidadMurcielago = PlayerPrefs.GetInt("CantidadMurcielago");
        CantidadSerpiente = PlayerPrefs.GetInt("CantidadSerpiente");
        CantidadAve = PlayerPrefs.GetInt("CantidadAve");

        if(CantidadCarpincho <= 0 && CantidadArana <= 0 && CantidadCocodrilo <= 0 && CantidadZorro <= 0 && CantidadMurcielago <= 0 && CantidadSerpiente <= 0 && CantidadAve <= 0)
        {
            CantidadCarpincho = 0;
            CantidadArana = 0;
            CantidadCocodrilo = 0;
            CantidadZorro = 0;
            CantidadMurcielago = 0;
            CantidadSerpiente = 0;
            CantidadAve = 0;

            PlayerPrefs.SetInt("CantidadCarpincho", CantidadCarpincho);
            PlayerPrefs.SetInt("CantidadArana", CantidadArana);
            PlayerPrefs.SetInt("CantidadCocodrilo", CantidadCocodrilo);
            PlayerPrefs.SetInt("CantidadZorro", CantidadZorro);
            PlayerPrefs.SetInt("CantidadMurcielago", CantidadMurcielago);
            PlayerPrefs.SetInt("CantidadSerpiente", CantidadSerpiente);
            PlayerPrefs.SetInt("CantidadAve", CantidadAve);

        }
    }

    //RESTAR ANIMALES

    public void RestarCantidadCarpincho()
    {
        CantidadCarpincho--;
        TextoCantidadCarpincho = GameObject.FindGameObjectWithTag("CantidadCarpincho").GetComponent<Text>();
        TextoCantidadCarpincho.text = CantidadCarpincho.ToString();
        PlayerPrefs.SetInt("CantidadCarpincho", CantidadCarpincho);

        if (CantidadCarpincho <= 0)
        {
            CantidadCarpincho = 0;
            PlayerPrefs.SetInt("CantidadCarpincho", CantidadCarpincho);
        }
    }

    public void RestarCantidadArana()
    {
        CantidadArana--;
        TextoCantidadArana = GameObject.FindGameObjectWithTag("CantidadArana").GetComponent<Text>();
        TextoCantidadArana.text = CantidadArana.ToString();
        PlayerPrefs.SetInt("CantidadArana", CantidadArana);

        if (CantidadArana <= 0)
        {
            CantidadArana = 0;
            PlayerPrefs.SetInt("CantidadArana", CantidadArana);
        }
    }

    public void RestarCantidadCocodrilo()
    {
        CantidadCocodrilo--;
        TextoCantidadCocodrilo = GameObject.FindGameObjectWithTag("CantidadCocodrilo").GetComponent<Text>();
        TextoCantidadCocodrilo.text = CantidadCocodrilo.ToString();
        PlayerPrefs.SetInt("CantidadCocodrilo", CantidadCocodrilo);

        if (CantidadCocodrilo <= 0)
        {
            CantidadCocodrilo = 0;
            PlayerPrefs.SetInt("CantidadCocodrilo", CantidadCocodrilo);
        }

    }

    public void RestarCantidadZorro()
    {
        CantidadZorro--;
        TextoCantidadZorro = GameObject.FindGameObjectWithTag("CantidadZorro").GetComponent<Text>();
        TextoCantidadZorro.text = CantidadZorro.ToString();
        PlayerPrefs.SetInt("CantidadZorro", CantidadZorro);

        if (CantidadZorro <= 0)
        {
            CantidadZorro = 0;
            PlayerPrefs.SetInt("CantidadZorro", CantidadZorro);
        }
    }

    public void RestarCantidadMurcielago()
    {
        CantidadMurcielago--;
        TextoCantidadMurcielago = GameObject.FindGameObjectWithTag("CantidadMurcielago").GetComponent<Text>();
        TextoCantidadMurcielago.text = CantidadMurcielago.ToString();
        PlayerPrefs.SetInt("CantidadMurcielago", CantidadMurcielago);

        if (CantidadMurcielago <= 0)
        {
            CantidadMurcielago = 0;
            PlayerPrefs.SetInt("CantidadMurcielago", CantidadMurcielago);
        }
    }

    public void RestarCantidadSerpiente()
    {
        CantidadSerpiente--;
        TextoCantidadSerpiente = GameObject.FindGameObjectWithTag("CantidadSerpiente").GetComponent<Text>();
        TextoCantidadSerpiente.text = CantidadSerpiente.ToString();
        PlayerPrefs.SetInt("CantidadSerpiente", CantidadSerpiente);

        if (CantidadSerpiente <= 0)
        {
            CantidadSerpiente = 0;
            PlayerPrefs.SetInt("CantidadSerpiente", CantidadSerpiente);
        }
    }

    public void RestarCantidadAve()
    {
        CantidadAve--;
        TextoCantidadAve = GameObject.FindGameObjectWithTag("CantidadAve").GetComponent<Text>();
        TextoCantidadAve.text = CantidadAve.ToString();
        PlayerPrefs.SetInt("CantidadAve", CantidadAve);

        if (CantidadAve <= 0)
        {
            CantidadAve = 0;
            PlayerPrefs.SetInt("CantidadAve", CantidadAve);
        }
    }


    //SUMAR ANIMALES

    public void SumarCantidadCarpincho()
    {
        CantidadCarpincho++;
        TextoCantidadCarpincho = GameObject.FindGameObjectWithTag("CantidadCarpincho").GetComponent<Text>();
        TextoCantidadCarpincho.text = CantidadCarpincho.ToString();
        PlayerPrefs.SetInt("CantidadCarpincho", CantidadCarpincho);
    }

    public void SumarCantidadArana()
    {
        CantidadArana++;
        TextoCantidadArana = GameObject.FindGameObjectWithTag("CantidadArana").GetComponent<Text>();
        TextoCantidadArana.text = CantidadArana.ToString();
        PlayerPrefs.SetInt("CantidadArana", CantidadArana);
    }

    public void SumarCantidadCocodrilo()
    {
        CantidadCocodrilo++;
        TextoCantidadCocodrilo = GameObject.FindGameObjectWithTag("CantidadCocodrilo").GetComponent<Text>();
        TextoCantidadCocodrilo.text = CantidadCocodrilo.ToString();
        PlayerPrefs.SetInt("CantidadCocodrilo", CantidadCocodrilo);
    }

    public void SumarCantidadZorro()
    {
        CantidadZorro++;
        TextoCantidadZorro = GameObject.FindGameObjectWithTag("CantidadZorro").GetComponent<Text>();
        TextoCantidadZorro.text = CantidadZorro.ToString();
        PlayerPrefs.SetInt("CantidadZorro", CantidadZorro);
    }

    public void SumarCantidadMurcielago()
    {
        CantidadMurcielago++;
        TextoCantidadMurcielago = GameObject.FindGameObjectWithTag("CantidadMurcielago").GetComponent<Text>();
        TextoCantidadMurcielago.text = CantidadMurcielago.ToString();
        PlayerPrefs.SetInt("CantidadMurcielago", CantidadMurcielago);
    }

    public void SumarCantidadSerpiente()
    {
        CantidadSerpiente++;
        TextoCantidadSerpiente = GameObject.FindGameObjectWithTag("CantidadSerpiente").GetComponent<Text>();
        TextoCantidadSerpiente.text = CantidadSerpiente.ToString();
        PlayerPrefs.SetInt("CantidadSerpiente", CantidadSerpiente);
    }

    public void SumarCantidadAve()
    {
        CantidadAve++;
        TextoCantidadAve = GameObject.FindGameObjectWithTag("CantidadAve").GetComponent<Text>();
        TextoCantidadAve.text = CantidadAve.ToString();
        PlayerPrefs.SetInt("CantidadAve", CantidadAve);
    }
}
