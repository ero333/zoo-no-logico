using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TogglePerdida : MonoBehaviour {

	public GameObject Perdiste;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	public void click () {
		if (Perdiste.activeInHierarchy == true)
		Perdiste.SetActive(false);
		else
		Perdiste.SetActive(true);
	}
}
