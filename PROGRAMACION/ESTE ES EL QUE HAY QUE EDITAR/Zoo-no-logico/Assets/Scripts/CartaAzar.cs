using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CartaAzar : MonoBehaviour {

    public GameObject Pantalla;

 

    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    List<int> listaRandom = new List<int>();

    public void ElegirCarta()
    {

        bool checkeo = true;

        while (checkeo) 
        {

            int numAzar = Random.Range(1, 13);

            if (listaRandom.Contains(numAzar)) 
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

    }
}
