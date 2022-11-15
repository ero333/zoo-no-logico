using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class CheckCuposCruza : MonoBehaviour {

	int cuposJaulas;
	int cuposStasis;
	[SerializeField] Button buttonJaulas;
	[SerializeField] Button buttonStasis;


	// Use this for initialization
	void Start () {
		cuposJaulas = PlayerPrefs.GetInt("JaulasOcupadas");
		cuposStasis = PlayerPrefs.GetInt("CantidadCruzasEnStasis");

		if(cuposJaulas >= 20)
        {
			buttonJaulas.interactable = false;
        }
        else
        {
			buttonJaulas.interactable = true;
		}

		if (cuposStasis >= 10)
		{
			buttonStasis.interactable = false;
		}
		else
		{
			buttonStasis.interactable = true;
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}


}
