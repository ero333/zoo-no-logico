using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Precio : MonoBehaviour {



    public Text textoPrecio;
    public string Jaula;
    public int precio;


    // Use this for initialization
    void Start () {
        textoPrecio = GameObject.FindGameObjectWithTag("PrecioJaulas").GetComponent<Text>();

        if (Jaula == "JC")
        {
            precio = 500;
            textoPrecio.text = precio.ToString();
        }
        if (Jaula == "JM")
        {
            precio = 1500;
            textoPrecio.text = precio.ToString();
        }
        if (Jaula == "JG")
        {
            precio = 2500;
            textoPrecio.text = precio.ToString();
        }

        {

        }
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
