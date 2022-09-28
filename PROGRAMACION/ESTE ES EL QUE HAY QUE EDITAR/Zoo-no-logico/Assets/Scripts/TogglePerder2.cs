using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TogglePerder2 : MonoBehaviour {

	public GameObject PerdistePopu;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	public void click () {
		if (PerdistePopu.activeInHierarchy == true)
		PerdistePopu.SetActive(false);
		else
		PerdistePopu.SetActive(true);
	}
}
