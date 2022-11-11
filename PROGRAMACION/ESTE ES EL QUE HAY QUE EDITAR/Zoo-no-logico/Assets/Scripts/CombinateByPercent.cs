using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class CombinateByPercent : MonoBehaviour {

    public Text porcentajeText;

	// Use this for initialization
	void Start () {

    }
	
	// Update is called once per frame
	void Update () {
		
	}

    public void MoveToCombinationScene()
    {
        int plata = PlayerPrefs.GetInt("Moneditas");
        int costo = PlayerPrefs.GetInt("costoCruza");
        int total = plata - costo;
        PlayerPrefs.SetInt("Moneditas", total);
        PlayerPrefs.SetString("PrimeraCombinacion", "false");

        if (PlayerPrefs.GetFloat("Porcentaje")<= int.Parse(porcentajeText.text))
        {
            SceneManager.LoadScene(6);
            PlayerPrefs.SetInt("cruzasExito", PlayerPrefs.GetInt("cruzasExito") + 1);
        }
        else
        {
            SceneManager.LoadScene(9);
            PlayerPrefs.SetInt("cruzasFalla", PlayerPrefs.GetInt("cruzasFalla") + 1);
        }
    }
}
