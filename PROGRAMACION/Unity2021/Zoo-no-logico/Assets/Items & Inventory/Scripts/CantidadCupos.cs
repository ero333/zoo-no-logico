using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CantidadCupos   : MonoBehaviour {

    public Text CantidadCupostext;
    public int Ocupadas;


	// Use this for initialization
	void Start () {

		
	}
	
	// Update is called once per frame
	void Update () {

        Ocupadas = PlayerPrefs.GetInt("JaulasOcupadas");
        CantidadCupostext.text = Ocupadas.ToString();
		
	}
}
