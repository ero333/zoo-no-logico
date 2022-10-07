using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MoneySetter : MonoBehaviour {

    Text moneyQty;
    public Sprite Moneda;
    Sprite monedaImg;
    public int Monedas;

	// Use this for initialization
	void Start () {
     
        
    }
	
	// Update is called once per frame
	void Update () {
        //moneyQty = GameObject.FindGameObjectsWithTag("TextoMonedas").GetComponent<Text>();
        for (int i = 0; i < GameObject.FindGameObjectsWithTag("TextoMonedas").Length; i++)
        {
            GameObject.FindGameObjectsWithTag("TextoMonedas")[i].GetComponent<Text>().text = Monedas.ToString();
        }
        Monedas = PlayerPrefs.GetInt("Moneditas");
        //monedaImg = GameObject.FindGameObjectWithTag("ImagenMonedas").GetComponent<Sprite>();
        //monedaImg = Moneda;
    }
}
