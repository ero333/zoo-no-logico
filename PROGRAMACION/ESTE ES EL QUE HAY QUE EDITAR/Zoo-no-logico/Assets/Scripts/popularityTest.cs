using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class popularityTest : MonoBehaviour {

	public GameObject Perdiste;
	public int popularidad;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		popularidad = PlayerPrefs.GetInt("Popularidad");
        // print(popularidad);
        if (popularidad>0)
        {
            if (popularidad >= 100)
            {
                print("ganaste");
            }
            if (popularidad <= 0)
            {
                Perdiste.SetActive(true);
            }

            else
            {
                Perdiste.SetActive(false);
            }
        }
		
	}

	public void aumentar(){
		popularidad += 10;
		PlayerPrefs.SetInt("Popularidad", popularidad);
	}

	public void reducir(){
		popularidad -= 10;
		PlayerPrefs.SetInt("Popularidad", popularidad);
	}

	public void restartMain(){
		SceneManager.LoadScene(1);

	}

    
}
