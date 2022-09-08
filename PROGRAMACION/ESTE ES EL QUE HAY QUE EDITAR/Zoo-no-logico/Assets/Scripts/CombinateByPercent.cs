using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class CombinateByPercent : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void MoveToCombinationScene()
    {
        if (PlayerPrefs.GetFloat("Porcentaje")>49)
        {
            SceneManager.LoadScene(6);
        }
        else
        {
            SceneManager.LoadScene(9);
        }
    }
}
