using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UnlockStoreAnimals : MonoBehaviour {


	public Button aveButton;
	public Button aranaButton;
	public Button serpienteButton;

	public GameObject aveImg;
	public GameObject aranaImg;
	public GameObject serpienteImg; 

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

        if (PlayerPrefs.GetInt("aveDesbloqueada") == 1)
        {
			aveButton.interactable = true;
            aveImg.GetComponent<SpriteRenderer>().color = Color.white;
        }
		if (PlayerPrefs.GetInt("aranaDesbloqueada") == 1)
		{
			aranaButton.interactable = true;
			aranaImg.GetComponent<SpriteRenderer>().color = Color.white;
		}

		if (PlayerPrefs.GetInt("serpienteDesbloqueada") == 1)
		{
			serpienteButton.interactable = true;
			serpienteImg.GetComponent<SpriteRenderer>().color = Color.white;
		}

	}
}
