using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CantidadVisitantes : MonoBehaviour {

    public Text Cantidad;
    private int Popularidad;

	// Use this for initialization
	void Start () {
       
	}
	
	// Update is called once per frame
	void Update () {
        Popularidad = PlayerPrefs.GetInt("Popularidad");
        if (Popularidad > 0)
        {
            Cantidad.text = (Popularidad * Popularidad).ToString();
        }
        else
        {
            Cantidad.text = "No vino ni la gente de limpieza";
        }


    }
}
