using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CartaAzar : MonoBehaviour
{

    public GameObject Pantalla;
    static List<int> listaRandom = new List<int>();
    public int Reset;


    // Use this for initialization
    void Start()
    {


    }

    // Update is called once per frame
    void Update()
    {


        Reset = PlayerPrefs.GetInt("ResetListCartas");

        if (Reset == 0)
        {
            listaRandom.Clear();
            listaRandom.Remove(0);
            listaRandom.Remove(1);
            listaRandom.Remove(2);
            listaRandom.Remove(3);
            listaRandom.Remove(4);
            listaRandom.Remove(5);
            listaRandom.Remove(6);
            listaRandom.Remove(7);
            listaRandom.Remove(8);
            listaRandom.Remove(9);
            //listaRandom.Remove(10);
            //listaRandom.Remove(11);

            Reset = 1;
            PlayerPrefs.SetInt("ResetListCartas", Reset);

        }

        if (listaRandom.Contains(1) &&
            listaRandom.Contains(2) &&
            listaRandom.Contains(3) &&
            listaRandom.Contains(4) &&
            listaRandom.Contains(5) &&
            listaRandom.Contains(6) &&
            listaRandom.Contains(7) &&
            listaRandom.Contains(8) &&
            listaRandom.Contains(9) &&
            listaRandom.Contains(10))
            //&&
            //listaRandom.Contains(11) &&
            //listaRandom.Contains(12))
        {
            Pantalla.SetActive(false);
            PlayerPrefs.SetInt("DesactivarNoti", 1);
        }

    }



    public void ElegirCarta()
    {

        PlayerPrefs.SetInt("cartasTotales", PlayerPrefs.GetInt("cartasTotales") + 1);

        Reset = 1;
        PlayerPrefs.SetInt("ResetListCartas", Reset);

        bool checkeo = true;
        PlayerPrefs.SetInt("EventoCartas", 0);



        while (checkeo)
        {

            int numAzar = Random.Range(1, 11);

            if (checkeo = true && listaRandom.Contains(numAzar))
            {
                checkeo = true;
            }

            else
            {
                listaRandom.Add(numAzar);
                checkeo = false;
            }

            PlayerPrefs.SetInt("AzarCartas", numAzar);
            Pantalla.SetActive(false);





        }

        if (listaRandom.Contains(1) &&
            listaRandom.Contains(2) &&
            listaRandom.Contains(3) &&
            listaRandom.Contains(4) &&
            listaRandom.Contains(5) &&
            listaRandom.Contains(6) &&
            listaRandom.Contains(7) &&
            listaRandom.Contains(8) &&
            listaRandom.Contains(9) &&
            listaRandom.Contains(10))
            //&&
            //listaRandom.Contains(11) &&
            //listaRandom.Contains(12))
        {
            PlayerPrefs.SetInt("DesactivarNoti", 1);
        }
    }



}
