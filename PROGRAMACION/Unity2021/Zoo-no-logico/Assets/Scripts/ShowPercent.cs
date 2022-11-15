using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShowPercent : MonoBehaviour {
    public Text text;
    // Use this for initialization
    void Start () {
        
    }
	
	// Update is called once per frame
	void Update () {
        text.text = PlayerPrefs.GetFloat("Porcentaje").ToString();
    }
}
