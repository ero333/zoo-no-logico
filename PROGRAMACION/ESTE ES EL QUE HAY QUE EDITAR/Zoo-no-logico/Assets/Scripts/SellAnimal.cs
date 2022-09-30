using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SellAnimal : MonoBehaviour {

    int plataTotal;
    int nuevaPlata;

	// Use this for initialization
	void Start () {
        plataTotal = PlayerPrefs.GetInt("Moneditas");
        nuevaPlata = PlayerPrefs.GetInt("plataCurrentCruza");
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void Vender()
    {
        plataTotal = plataTotal + nuevaPlata;
        PlayerPrefs.SetInt("Moneditas", plataTotal);
    }
}
