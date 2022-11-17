using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CodexCruzas : MonoBehaviour {

	public GameObject[] CruzasArray;

	void Awake ()
    {
        PlayerPrefs.SetInt("totalCodex", 0);
        GetCruzas();
	}

	void Start()
    {
        PlayerPrefs.SetInt("totalCodex", 0);
        for (int i = 0; i < CruzasArray.Length; i++)
		{
			Sprite cruza_test_img = Resources.Load<Sprite>(i.ToString());

			Image Cruza_image = CruzasArray[i].GetComponent<Image>();

			Cruza_image.sprite = cruza_test_img;

			if (PlayerPrefs.GetInt("Cruza" + i) == 0)
            {
				CruzasArray[i].GetComponent<Button>().interactable = false;
				var buttonColor = CruzasArray[i].GetComponent<Button>().colors;
				buttonColor.disabledColor = new Color(0, 0, 0);
				//buttonColor.colorMultiplier = 5;
				CruzasArray[i].GetComponent<Button>().colors = buttonColor;

			} else
            {
				CruzasArray[i].GetComponent<Button>().interactable = true;
				PlayerPrefs.SetInt("totalCodex", PlayerPrefs.GetInt("totalCodex") + 1);

			}
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	GameObject[] GetCruzas()
	{
		CruzasArray = GameObject.FindGameObjectsWithTag("CruzaSlot");
		Array.Sort(CruzasArray, CompareJaulas);
		return CruzasArray;
	}

	private int CompareJaulas(GameObject x, GameObject y)
	{
		return Int16.Parse(x.name).CompareTo(Int16.Parse(y.name));
	}
}
