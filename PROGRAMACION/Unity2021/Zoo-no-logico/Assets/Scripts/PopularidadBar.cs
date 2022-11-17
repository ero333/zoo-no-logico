using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; // ESTE COMANDO ES PARA QUE ESTE CODIGO PUEDA ACCEDER A LAS IMAGENES DEL PROYECTO
using UnityEngine.EventSystems; //CON ESTO VAMOS A PODER EMPEZAR A HACER CLICK Y SELECCIONAR EL ITEM


public class PopularidadBar : MonoBehaviour {

public Image barra;
float popularidad;
float popularidadMaxima = 100f;

	// Use this for initialization
	void Start () {
		// 
		barra = GetComponent<Image>();
	}
	
	// Update is called once per frame
	void Update () {
		popularidad = (float)PlayerPrefs.GetInt("Popularidad");
		barra.fillAmount = popularidad/popularidadMaxima;

	}
}
