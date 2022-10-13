using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class DisableCombinationBtn : MonoBehaviour {

    string animal1;
    string animal2;
    string animal3;
    public Button combinationButton;

    // Use this for initialization
    void Start () {
		
	}

    // Update is called once per frame
    void Update()
    {


        animal1 = PlayerPrefs.GetString("Slot1");
        animal2 = PlayerPrefs.GetString("Slot2");
        animal3 = PlayerPrefs.GetString("Slot3");
        if (animal1.Length > 1 && animal2.Length > 1 && animal3.Length > 1 && PlayerPrefs.GetInt("Moneditas") >= PlayerPrefs.GetInt("costoCruza"))
        {
            combinationButton.interactable = true;
        }
        else
        {
            combinationButton.interactable = false;
        }
    }
}

