using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DisableCartaBtn : MonoBehaviour
{


    public Button boton1;
    public Button boton2;
    public Button boton3;
    public Button boton4;
    public Button boton5;
    public Button boton6;
    public Button boton7;
    public Button boton8;
    public Button boton9;
    public Button boton10;
    //public Button boton11;
    //public Button boton12;

    public int numAzar = 0;

    public int ActivadorCarta1 = 0;
    public int ActivadorCarta2 = 0;
    public int ActivadorCarta3 = 0;
    public int ActivadorCarta4 = 0;
    public int ActivadorCarta5 = 0;
    public int ActivadorCarta6 = 0;
    public int ActivadorCarta7 = 0;
    public int ActivadorCarta8 = 0;
    public int ActivadorCarta9 = 0;
    public int ActivadorCarta10 = 0;
    //public int ActivadorCarta11 = 0;
    //public int ActivadorCarta12 = 0;

    bool Abrir = false;


    public GameObject Pantalla;
    public int ActivadorEvento;




    // Use this for initialization
    void Start()
    {
        numAzar = 0;


        ActivadorEvento = PlayerPrefs.GetInt("EventoCartas");

        if (ActivadorEvento == 1)
        {
            Pantalla.SetActive(true);
        }

    }

    // Update is called once per frame
    void Update()
    {

        numAzar = PlayerPrefs.GetInt("AzarCartas");


        ActivadorCarta1 = PlayerPrefs.GetInt("ActivadorCarta1");
        if (ActivadorCarta1 >= 1)
        {
            boton1.interactable = true;
        }

        if (ActivadorCarta1 == 1 && Abrir == true)
        {
            boton1.SendMessage("Abrir");
            Abrir = false;
            ActivadorCarta1++;
            PlayerPrefs.SetInt("ActivadorCarta1", ActivadorCarta1);
        }

        ActivadorCarta2 = PlayerPrefs.GetInt("ActivadorCarta2");
        if (ActivadorCarta2 >= 2)
        {
            boton2.interactable = true;

        }

        if (ActivadorCarta2 == 2 && Abrir == true)
        {
            boton2.SendMessage("Abrir");
            Abrir = false;
            ActivadorCarta2++;
            PlayerPrefs.SetInt("ActivadorCarta2", ActivadorCarta2);
        }

        ActivadorCarta3 = PlayerPrefs.GetInt("ActivadorCarta3");
        if (ActivadorCarta3 >= 3)
        {
            boton3.interactable = true;

        }

        if (ActivadorCarta3 == 3 && Abrir == true)
        {
            boton3.SendMessage("Abrir");
            Abrir = false;
            ActivadorCarta3++;
            PlayerPrefs.SetInt("ActivadorCarta3", ActivadorCarta3);
        }


        ActivadorCarta4 = PlayerPrefs.GetInt("ActivadorCarta4");
        if (ActivadorCarta4 >= 4)
        {
            boton4.interactable = true;

        }

        if (ActivadorCarta4 == 4 && Abrir == true)
        {
            boton4.SendMessage("Abrir");
            Abrir = false;
            ActivadorCarta4++;
            PlayerPrefs.SetInt("ActivadorCarta4", ActivadorCarta4);
        }

        ActivadorCarta5 = PlayerPrefs.GetInt("ActivadorCarta5");
        if (ActivadorCarta5 >= 5)
        {
            boton5.interactable = true;

        }

        if (ActivadorCarta5 == 5 && Abrir == true)
        {
            boton5.SendMessage("Abrir");
            Abrir = false;
            ActivadorCarta5++;
            PlayerPrefs.SetInt("ActivadorCarta5", ActivadorCarta5);
        }

        ActivadorCarta6 = PlayerPrefs.GetInt("ActivadorCarta6");
        if (ActivadorCarta6 >= 6)
        {
            boton6.interactable = true;

        }

        if (ActivadorCarta6 == 6 && Abrir == true)
        {
            boton6.SendMessage("Abrir");
            Abrir = false;
            ActivadorCarta6++;
            PlayerPrefs.SetInt("ActivadorCarta6", ActivadorCarta6);
        }

        ActivadorCarta7 = PlayerPrefs.GetInt("ActivadorCarta7");
        if (ActivadorCarta7 >= 7)
        {
            boton7.interactable = true;

        }

        if (ActivadorCarta7 == 7 && Abrir == true)
        {
            boton7.SendMessage("Abrir");
            Abrir = false;
            ActivadorCarta7++;
            PlayerPrefs.SetInt("ActivadorCarta7", ActivadorCarta7);
        }

        ActivadorCarta8 = PlayerPrefs.GetInt("ActivadorCarta8");
        if (ActivadorCarta8 >= 8)
        {
            boton8.interactable = true;

        }

        if (ActivadorCarta8 == 8 && Abrir == true)
        {
            boton8.SendMessage("Abrir");
            Abrir = false;
            ActivadorCarta8++;
            PlayerPrefs.SetInt("ActivadorCarta8", ActivadorCarta8);
        }

        ActivadorCarta9 = PlayerPrefs.GetInt("ActivadorCarta9");
        if (ActivadorCarta9 >= 9)
        {
            boton9.interactable = true;

        }

        if (ActivadorCarta9 == 9 && Abrir == true)
        {
            boton9.SendMessage("Abrir");
            Abrir = false;
            ActivadorCarta9++;
            PlayerPrefs.SetInt("ActivadorCarta9", ActivadorCarta9);
        }

        ActivadorCarta10 = PlayerPrefs.GetInt("ActivadorCarta10");
        if (ActivadorCarta10 >= 10)
        {
            boton10.interactable = true;

        }

        if (ActivadorCarta10 == 10 && Abrir == true)
        {
            boton10.SendMessage("Abrir");
            Abrir = false;
            ActivadorCarta10++;
            PlayerPrefs.SetInt("ActivadorCarta10", ActivadorCarta10);
        }


        //ActivadorCarta11 = PlayerPrefs.GetInt("ActivadorCarta11");
        //if (ActivadorCarta11 >= 11)
        //{
        //    boton11.interactable = true;

        //}

        //if (ActivadorCarta11 == 11 && Abrir == true)
        //{
        //    boton11.SendMessage("Abrir");
        //    Abrir = false;
        //    ActivadorCarta11++;
        //    PlayerPrefs.SetInt("ActivadorCarta11", ActivadorCarta11);
        //}


        //ActivadorCarta12 = PlayerPrefs.GetInt("ActivadorCarta12");
        //if (ActivadorCarta12 >= 12)
        //{
        //    boton12.interactable = true;

        //}

        //if (ActivadorCarta12 == 12 && Abrir == true)
        //{
        //    boton12.SendMessage("Abrir");
        //    Abrir = false;
        //    ActivadorCarta12++;
        //    PlayerPrefs.SetInt("ActivadorCarta12", ActivadorCarta12);
        //}


        switch (numAzar)
        {
            case 1:
                ActivadorCarta1 = 1;
                Abrir = true;
                PlayerPrefs.SetInt("ActivadorCarta1", ActivadorCarta1);

                numAzar = 0;
                PlayerPrefs.SetInt("AzarCartas", numAzar);
                break;

            case 2:
                ActivadorCarta2 = 2;
                Abrir = true;
                PlayerPrefs.SetInt("ActivadorCarta2", ActivadorCarta2);

                numAzar = 0;
                PlayerPrefs.SetInt("AzarCartas", numAzar);
                break;

            case 3:
                ActivadorCarta3 = 3;
                Abrir = true;
                PlayerPrefs.SetInt("ActivadorCarta3", ActivadorCarta3);

                numAzar = 0;
                PlayerPrefs.SetInt("AzarCartas", numAzar);
                break;

            case 4:
                ActivadorCarta4 = 4;
                Abrir = true;
                PlayerPrefs.SetInt("ActivadorCarta4", ActivadorCarta4);

                numAzar = 0;
                PlayerPrefs.SetInt("AzarCartas", numAzar);
                break;

            case 5:
                ActivadorCarta5 = 5;
                Abrir = true;
                PlayerPrefs.SetInt("ActivadorCarta5", ActivadorCarta5);

                numAzar = 0;
                PlayerPrefs.SetInt("AzarCartas", numAzar);
                break;

            case 6:
                ActivadorCarta6 = 6;
                Abrir = true;
                PlayerPrefs.SetInt("ActivadorCarta6", ActivadorCarta6);

                numAzar = 0;
                PlayerPrefs.SetInt("AzarCartas", numAzar);
                break;

            case 7:
                ActivadorCarta7 = 7;
                Abrir = true;
                PlayerPrefs.SetInt("ActivadorCarta7", ActivadorCarta7);

                numAzar = 0;
                PlayerPrefs.SetInt("AzarCartas", numAzar);
                break;

            case 8:
                ActivadorCarta8 = 8;
                Abrir = true;
                PlayerPrefs.SetInt("ActivadorCarta8", ActivadorCarta8);

                numAzar = 0;
                PlayerPrefs.SetInt("AzarCartas", numAzar);
                break;

            case 9:
                ActivadorCarta9 = 9;
                Abrir = true;
                PlayerPrefs.SetInt("ActivadorCarta9", ActivadorCarta9);

                numAzar = 0;
                PlayerPrefs.SetInt("AzarCartas", numAzar);
                break;

            case 10:
                ActivadorCarta10 = 10;
                Abrir = true;
                PlayerPrefs.SetInt("ActivadorCarta10", ActivadorCarta10);

                numAzar = 0;
                PlayerPrefs.SetInt("AzarCartas", numAzar);
                break;

            //case 11:
            //    ActivadorCarta11 = 11;
            //    Abrir = true;
            //    PlayerPrefs.SetInt("ActivadorCarta11", ActivadorCarta11);

            //    numAzar = 0;
            //    PlayerPrefs.SetInt("AzarCartas", numAzar);
            //    break;

            //case 12:
            //    ActivadorCarta12 = 12;
            //    Abrir = true;
            //    PlayerPrefs.SetInt("ActivadorCarta12", ActivadorCarta12);

            //    numAzar = 0;
            //    PlayerPrefs.SetInt("AzarCartas", numAzar);
            //    break;

        }
    }




}
