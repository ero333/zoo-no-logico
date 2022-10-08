using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DisableJaulaBtn : MonoBehaviour {

    int jaulasAvilable;
    public int jaulasTotales = 20;
    public Button boton;

    [SerializeField] private GameObject cruza;
    public string cruza_num;

	// Use this for initialization
	void Start () {
        cruza_num = cruza.GetComponent<Image>().sprite.name;
        PlayerPrefs.SetString("Jaula1", cruza_num);
    }
	
	// Update is called once per frame
	void Update () {
        jaulasAvilable = jaulasTotales - PlayerPrefs.GetInt("Jaulitas");
        if (jaulasAvilable <= 0) {
            boton.interactable = false;
        }
        else
        {
            boton.interactable = true;
        }
    }
}
