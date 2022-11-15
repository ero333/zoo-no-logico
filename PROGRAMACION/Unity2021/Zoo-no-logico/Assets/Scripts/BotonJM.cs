using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BotonJM : MonoBehaviour {

	public GameObject Boton1;
	public GameObject Boton2;
	public GameObject Boton3;

	// Use this for initialization
	void Start()
	{
		Boton1.SetActive(false);
		Boton2.SetActive(false);
		Boton3.SetActive(false);
	}

	// Update is called once per frame
	void Update()
	{

	}

	public void Mover() // Mètodo que se va a repetir
	{
		Boton1.SetActive(false);
		Boton2.SetActive(true);
		Boton3.SetActive(false);

		
	}

}