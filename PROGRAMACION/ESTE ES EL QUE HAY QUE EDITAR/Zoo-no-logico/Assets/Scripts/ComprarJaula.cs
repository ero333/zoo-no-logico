using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ComprarJaula : MonoBehaviour {

    [SerializeField] private GameObject cruza;
    public string cruza_num;

    // Use this for initialization
    void Start () {
        
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    public void ComprarJaulaTest ()
    {
        cruza_num = cruza.GetComponent<Image>().sprite.name;
        PlayerPrefs.SetString("Jaula" + PlayerPrefs.GetInt("JaulasOcupadas"), cruza_num);
        
        PlayerPrefs.SetInt("JaulasOcupadas", PlayerPrefs.GetInt("JaulasOcupadas") + 1);
        print(PlayerPrefs.GetInt("JaulasOcupadas"));


    }
}
