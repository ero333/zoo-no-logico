using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MoneySetter : MonoBehaviour {

    Text moneyQty;
    public Sprite Moneda;
    Sprite monedaImg;
    int Monedas;

	// Use this for initialization
	void Start () {
     
        
    }
	
	// Update is called once per frame
	void Update () {
        moneyQty = GameObject.FindGameObjectWithTag("TextoMonedas").GetComponent<Text>();
        Monedas = PlayerPrefs.GetInt("Moneditas");
        moneyQty.text = Monedas.ToString();

        monedaImg = GameObject.FindGameObjectWithTag("ImagenMonedas").GetComponent<Sprite>();
        monedaImg = Moneda;
    }
}
