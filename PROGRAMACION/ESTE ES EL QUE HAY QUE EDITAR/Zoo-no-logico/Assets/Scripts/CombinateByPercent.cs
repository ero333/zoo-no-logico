using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class CombinateByPercent : MonoBehaviour {

    public Text porcentajeText;

	// Use this for initialization
	void Start () {
        print(porcentajeText.text);
        print(PlayerPrefs.GetFloat("Porcentaje"));
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    public void MoveToCombinationScene()
    {
        int plata = PlayerPrefs.GetInt("Moneditas");
        int costo = PlayerPrefs.GetInt("costoCruza");
        int total = plata - costo;
        print(total);
        PlayerPrefs.SetInt("Moneditas", total);

        if (PlayerPrefs.GetFloat("Porcentaje")<= int.Parse(porcentajeText.text))
        {
            SceneManager.LoadScene(6);
        }
        else
        {
            SceneManager.LoadScene(9);
        }
    }
}
