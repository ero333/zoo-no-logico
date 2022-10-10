using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DisableJaulaBtn : MonoBehaviour {

    int jaulasAvilable;
    public int jaulasTotales = 20;
    public Button boton;
   

	// Use this for initialization
	void Start () {
       
    }
	
	// Update is called once per frame
	void Update () {
        //jaulasAvilable = jaulasTotales - PlayerPrefs.GetInt("Jaulitas");
        //if (jaulasAvilable <= 0) {
        //    boton.interactable = false;
        //}
        //else
        //{
        //    boton.interactable = true;
        //}
    }
}
