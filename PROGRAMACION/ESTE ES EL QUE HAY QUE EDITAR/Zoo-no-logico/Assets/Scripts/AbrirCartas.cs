using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AbrirCartas : MonoBehaviour {

    public GameObject CartaInfo;
    public GameObject Sombreado;
    public GameObject CartaBoton;


	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

   public void Abrir()
    {
        CartaInfo.SetActive(true);
        CartaBoton.SetActive(true);
        Sombreado.SetActive(true);
    }


    public void Cerrar()
    {
        CartaInfo.SetActive(false);
        CartaBoton.SetActive(false);
        Sombreado.SetActive(false);
    }
}
