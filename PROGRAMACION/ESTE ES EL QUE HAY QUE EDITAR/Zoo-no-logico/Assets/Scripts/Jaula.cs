using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Jaula : MonoBehaviour {



    public GameObject Jaula1;
    public GameObject Jaula2;
    public GameObject Jaula3;
    public GameObject Jaula4;
    public GameObject Jaula5;
    public GameObject Jaula6;
    public GameObject Jaula7;
    public GameObject Jaula8;
    public GameObject Jaula9;
    public GameObject Jaula10;
    public GameObject Jaula11;
    public GameObject Jaula12;
    public GameObject Jaula13;
    public GameObject Jaula14;
    public GameObject Jaula15;
    public GameObject Jaula16;
    public GameObject Jaula17;
    public GameObject Jaula18;
    public GameObject Jaula19;
    public GameObject Jaula20;

    public int Jaulas;
    public Text textoJaulas;

    // Use this for initialization
    void Start () 
    {


        textoJaulas = GameObject.FindGameObjectWithTag("TextoJaulas").GetComponent<Text>();
        Jaulas = PlayerPrefs.GetInt("Jaulitas");
        
        
    }
	
	// Update is called once per frame
	void Update () {
        textoJaulas.text = Jaulas.ToString();
        Jaulas = PlayerPrefs.GetInt("Jaulitas");
        

        //Sprite cruza_test_img = Resources.Load<Sprite>(PlayerPrefs.GetString("Jaula1"));

        //Image Jaula1_image = Jaula1.GetComponent<Image>();

        //Jaula1_image.sprite = cruza_test_img;

        //switch (Jaulas)
        //{

        //    case 0:
        //        Jaula1.SetActive(false);
        //        Jaula2.SetActive(false);
        //        Jaula3.SetActive(false);
        //        Jaula4.SetActive(false);
        //        Jaula5.SetActive(false);
        //        Jaula6.SetActive(false);
        //        Jaula7.SetActive(false);
        //        Jaula8.SetActive(false);
        //        Jaula9.SetActive(false);
        //        Jaula10.SetActive(false);
        //        Jaula11.SetActive(false);
        //        Jaula12.SetActive(false);
        //        Jaula13.SetActive(false);
        //        Jaula14.SetActive(false);
        //        Jaula15.SetActive(false);
        //        Jaula16.SetActive(false);
        //        Jaula17.SetActive(false);
        //        Jaula18.SetActive(false);
        //        Jaula19.SetActive(false);
        //        Jaula20.SetActive(false);
        //        break;

        //    case 1:
        //        Jaula1.SetActive(true);
        //        Jaula2.SetActive(false);
        //        Jaula3.SetActive(false);
        //        Jaula4.SetActive(false);
        //        Jaula5.SetActive(false);
        //        Jaula6.SetActive(false);
        //        Jaula7.SetActive(false);
        //        Jaula8.SetActive(false);
        //        Jaula9.SetActive(false);
        //        Jaula10.SetActive(false);
        //        Jaula11.SetActive(false);
        //        Jaula12.SetActive(false);
        //        Jaula13.SetActive(false);
        //        Jaula14.SetActive(false);
        //        Jaula15.SetActive(false);
        //        Jaula16.SetActive(false);
        //        Jaula17.SetActive(false);
        //        Jaula18.SetActive(false);
        //        Jaula19.SetActive(false);
        //        Jaula20.SetActive(false);

        //        break;

        //    case 2:
        //        Jaula1.SetActive(true);
        //        Jaula2.SetActive(true);
        //        Jaula3.SetActive(false);
        //        Jaula4.SetActive(false);
        //        Jaula5.SetActive(false);
        //        Jaula6.SetActive(false);
        //        Jaula7.SetActive(false);
        //        Jaula8.SetActive(false);
        //        Jaula9.SetActive(false);
        //        Jaula10.SetActive(false);
        //        Jaula11.SetActive(false);
        //        Jaula12.SetActive(false);
        //        Jaula13.SetActive(false);
        //        Jaula14.SetActive(false);
        //        Jaula15.SetActive(false);
        //        Jaula16.SetActive(false);
        //        Jaula17.SetActive(false);
        //        Jaula18.SetActive(false);
        //        Jaula19.SetActive(false);
        //        Jaula20.SetActive(false);
        //        break;

        //    case 3:
        //        Jaula1.SetActive(true);
        //        Jaula2.SetActive(true);
        //        Jaula3.SetActive(true);
        //        Jaula4.SetActive(false);
        //        Jaula5.SetActive(false);
        //        Jaula6.SetActive(false);
        //        Jaula7.SetActive(false);
        //        Jaula8.SetActive(false);
        //        Jaula9.SetActive(false);
        //        Jaula10.SetActive(false);
        //        Jaula11.SetActive(false);
        //        Jaula12.SetActive(false);
        //        Jaula13.SetActive(false);
        //        Jaula14.SetActive(false);
        //        Jaula15.SetActive(false);
        //        Jaula16.SetActive(false);
        //        Jaula17.SetActive(false);
        //        Jaula18.SetActive(false);
        //        Jaula19.SetActive(false);
        //        Jaula20.SetActive(false);
        //        break;

        //    case 4:
        //        Jaula1.SetActive(true);
        //        Jaula2.SetActive(true);
        //        Jaula3.SetActive(true);
        //        Jaula4.SetActive(true);
        //        Jaula5.SetActive(false);
        //        Jaula6.SetActive(false);
        //        Jaula7.SetActive(false);
        //        Jaula8.SetActive(false);
        //        Jaula9.SetActive(false);
        //        Jaula10.SetActive(false);
        //        Jaula11.SetActive(false);
        //        Jaula12.SetActive(false);
        //        Jaula13.SetActive(false);
        //        Jaula14.SetActive(false);
        //        Jaula15.SetActive(false);
        //        Jaula16.SetActive(false);
        //        Jaula17.SetActive(false);
        //        Jaula18.SetActive(false);
        //        Jaula19.SetActive(false);
        //        Jaula20.SetActive(false);
        //        break;

        //    case 5:
        //        Jaula1.SetActive(true);
        //        Jaula2.SetActive(true);
        //        Jaula3.SetActive(true);
        //        Jaula4.SetActive(true);
        //        Jaula5.SetActive(true);
        //        Jaula6.SetActive(false);
        //        Jaula7.SetActive(false);
        //        Jaula8.SetActive(false);
        //        Jaula9.SetActive(false);
        //        Jaula10.SetActive(false);
        //        Jaula11.SetActive(false);
        //        Jaula12.SetActive(false);
        //        Jaula13.SetActive(false);
        //        Jaula14.SetActive(false);
        //        Jaula15.SetActive(false);
        //        Jaula16.SetActive(false);
        //        Jaula17.SetActive(false);
        //        Jaula18.SetActive(false);
        //        Jaula19.SetActive(false);
        //        Jaula20.SetActive(false);
        //        break;

        //    case 6:
        //        Jaula1.SetActive(true);
        //        Jaula2.SetActive(true);
        //        Jaula3.SetActive(true);
        //        Jaula4.SetActive(true);
        //        Jaula5.SetActive(true);
        //        Jaula6.SetActive(true);
        //        Jaula7.SetActive(false);
        //        Jaula8.SetActive(false);
        //        Jaula9.SetActive(false);
        //        Jaula10.SetActive(false);
        //        Jaula11.SetActive(false);
        //        Jaula12.SetActive(false);
        //        Jaula13.SetActive(false);
        //        Jaula14.SetActive(false);
        //        Jaula15.SetActive(false);
        //        Jaula16.SetActive(false);
        //        Jaula17.SetActive(false);
        //        Jaula18.SetActive(false);
        //        Jaula19.SetActive(false);
        //        Jaula20.SetActive(false);
        //        break;

        //    case 7:
        //        Jaula1.SetActive(true);
        //        Jaula2.SetActive(true);
        //        Jaula3.SetActive(true);
        //        Jaula4.SetActive(true);
        //        Jaula5.SetActive(true);
        //        Jaula6.SetActive(true);
        //        Jaula7.SetActive(true);
        //        Jaula8.SetActive(false);
        //        Jaula9.SetActive(false);
        //        Jaula10.SetActive(false);
        //        Jaula11.SetActive(false);
        //        Jaula12.SetActive(false);
        //        Jaula13.SetActive(false);
        //        Jaula14.SetActive(false);
        //        Jaula15.SetActive(false);
        //        Jaula16.SetActive(false);
        //        Jaula17.SetActive(false);
        //        Jaula18.SetActive(false);
        //        Jaula19.SetActive(false);
        //        Jaula20.SetActive(false);
        //        break;

        //    case 8:
        //        Jaula1.SetActive(true);
        //        Jaula2.SetActive(true);
        //        Jaula3.SetActive(true);
        //        Jaula4.SetActive(true);
        //        Jaula5.SetActive(true);
        //        Jaula6.SetActive(true);
        //        Jaula7.SetActive(true);
        //        Jaula8.SetActive(true);
        //        Jaula9.SetActive(false);
        //        Jaula10.SetActive(false);
        //        Jaula11.SetActive(false);
        //        Jaula12.SetActive(false);
        //        Jaula13.SetActive(false);
        //        Jaula14.SetActive(false);
        //        Jaula15.SetActive(false);
        //        Jaula16.SetActive(false);
        //        Jaula17.SetActive(false);
        //        Jaula18.SetActive(false);
        //        Jaula19.SetActive(false);
        //        Jaula20.SetActive(false);
        //        break;

        //    case 9:
        //        Jaula1.SetActive(true);
        //        Jaula2.SetActive(true);
        //        Jaula3.SetActive(true);
        //        Jaula4.SetActive(true);
        //        Jaula5.SetActive(true);
        //        Jaula6.SetActive(true);
        //        Jaula7.SetActive(true);
        //        Jaula8.SetActive(true);
        //        Jaula9.SetActive(true);
        //        Jaula10.SetActive(false);
        //        Jaula11.SetActive(false);
        //        Jaula12.SetActive(false);
        //        Jaula13.SetActive(false);
        //        Jaula14.SetActive(false);
        //        Jaula15.SetActive(false);
        //        Jaula16.SetActive(false);
        //        Jaula17.SetActive(false);
        //        Jaula18.SetActive(false);
        //        Jaula19.SetActive(false);
        //        Jaula20.SetActive(false);
        //        break;

        //    case 10:
        //        Jaula1.SetActive(true);
        //        Jaula2.SetActive(true);
        //        Jaula3.SetActive(true);
        //        Jaula4.SetActive(true);
        //        Jaula5.SetActive(true);
        //        Jaula6.SetActive(true);
        //        Jaula7.SetActive(true);
        //        Jaula8.SetActive(true);
        //        Jaula9.SetActive(true);
        //        Jaula10.SetActive(true);
        //        Jaula11.SetActive(false);
        //        Jaula12.SetActive(false);
        //        Jaula13.SetActive(false);
        //        Jaula14.SetActive(false);
        //        Jaula15.SetActive(false);
        //        Jaula16.SetActive(false);
        //        Jaula17.SetActive(false);
        //        Jaula18.SetActive(false);
        //        Jaula19.SetActive(false);
        //        Jaula20.SetActive(false);
        //        break;

        //    case 11:
        //        Jaula1.SetActive(true);
        //        Jaula2.SetActive(true);
        //        Jaula3.SetActive(true);
        //        Jaula4.SetActive(true);
        //        Jaula5.SetActive(true);
        //        Jaula6.SetActive(true);
        //        Jaula7.SetActive(true);
        //        Jaula8.SetActive(true);
        //        Jaula9.SetActive(true);
        //        Jaula10.SetActive(true);
        //        Jaula11.SetActive(true);
        //        Jaula12.SetActive(false);
        //        Jaula13.SetActive(false);
        //        Jaula14.SetActive(false);
        //        Jaula15.SetActive(false);
        //        Jaula16.SetActive(false);
        //        Jaula17.SetActive(false);
        //        Jaula18.SetActive(false);
        //        Jaula19.SetActive(false);
        //        Jaula20.SetActive(false);
        //        break;

        //    case 12:
        //        Jaula1.SetActive(true);
        //        Jaula2.SetActive(true);
        //        Jaula3.SetActive(true);
        //        Jaula4.SetActive(true);
        //        Jaula5.SetActive(true);
        //        Jaula6.SetActive(true);
        //        Jaula7.SetActive(true);
        //        Jaula8.SetActive(true);
        //        Jaula9.SetActive(true);
        //        Jaula10.SetActive(true);
        //        Jaula11.SetActive(true);
        //        Jaula12.SetActive(true);
        //        Jaula13.SetActive(false);
        //        Jaula14.SetActive(false);
        //        Jaula15.SetActive(false);
        //        Jaula16.SetActive(false);
        //        Jaula17.SetActive(false);
        //        Jaula18.SetActive(false);
        //        Jaula19.SetActive(false);
        //        Jaula20.SetActive(false);
        //        break;

        //    case 13:
        //        Jaula1.SetActive(true);
        //        Jaula2.SetActive(true);
        //        Jaula3.SetActive(true);
        //        Jaula4.SetActive(true);
        //        Jaula5.SetActive(true);
        //        Jaula6.SetActive(true);
        //        Jaula7.SetActive(true);
        //        Jaula8.SetActive(true);
        //        Jaula9.SetActive(true);
        //        Jaula10.SetActive(true);
        //        Jaula11.SetActive(true);
        //        Jaula12.SetActive(true);
        //        Jaula13.SetActive(true);
        //        Jaula14.SetActive(false);
        //        Jaula15.SetActive(false);
        //        Jaula16.SetActive(false);
        //        Jaula17.SetActive(false);
        //        Jaula18.SetActive(false);
        //        Jaula19.SetActive(false);
        //        Jaula20.SetActive(false);
        //        break;

        //    case 14:
        //        Jaula1.SetActive(true);
        //        Jaula2.SetActive(true);
        //        Jaula3.SetActive(true);
        //        Jaula4.SetActive(true);
        //        Jaula5.SetActive(true);
        //        Jaula6.SetActive(true);
        //        Jaula7.SetActive(true);
        //        Jaula8.SetActive(true);
        //        Jaula9.SetActive(true);
        //        Jaula10.SetActive(true);
        //        Jaula11.SetActive(true);
        //        Jaula12.SetActive(true);
        //        Jaula13.SetActive(true);
        //        Jaula14.SetActive(true);
        //        Jaula15.SetActive(false);
        //        Jaula16.SetActive(false);
        //        Jaula17.SetActive(false);
        //        Jaula18.SetActive(false);
        //        Jaula19.SetActive(false);
        //        Jaula20.SetActive(false);
        //        break;

        //    case 15:
        //        Jaula1.SetActive(true);
        //        Jaula2.SetActive(true);
        //        Jaula3.SetActive(true);
        //        Jaula4.SetActive(true);
        //        Jaula5.SetActive(true);
        //        Jaula6.SetActive(true);
        //        Jaula7.SetActive(true);
        //        Jaula8.SetActive(true);
        //        Jaula9.SetActive(true);
        //        Jaula10.SetActive(true);
        //        Jaula11.SetActive(true);
        //        Jaula12.SetActive(true);
        //        Jaula13.SetActive(true);
        //        Jaula14.SetActive(true);
        //        Jaula15.SetActive(true);
        //        Jaula16.SetActive(false);
        //        Jaula17.SetActive(false);
        //        Jaula18.SetActive(false);
        //        Jaula19.SetActive(false);
        //        Jaula20.SetActive(false);
        //        break;

        //    case 16:
        //        Jaula1.SetActive(true);
        //        Jaula2.SetActive(true);
        //        Jaula3.SetActive(true);
        //        Jaula4.SetActive(true);
        //        Jaula5.SetActive(true);
        //        Jaula6.SetActive(true);
        //        Jaula7.SetActive(true);
        //        Jaula8.SetActive(true);
        //        Jaula9.SetActive(true);
        //        Jaula10.SetActive(true);
        //        Jaula11.SetActive(true);
        //        Jaula12.SetActive(true);
        //        Jaula13.SetActive(true);
        //        Jaula14.SetActive(true);
        //        Jaula15.SetActive(true);
        //        Jaula16.SetActive(true);
        //        Jaula17.SetActive(false);
        //        Jaula18.SetActive(false);
        //        Jaula19.SetActive(false);
        //        Jaula20.SetActive(false);
        //        break;

        //    case 17:
        //        Jaula1.SetActive(true);
        //        Jaula2.SetActive(true);
        //        Jaula3.SetActive(true);
        //        Jaula4.SetActive(true);
        //        Jaula5.SetActive(true);
        //        Jaula6.SetActive(true);
        //        Jaula7.SetActive(true);
        //        Jaula8.SetActive(true);
        //        Jaula9.SetActive(true);
        //        Jaula10.SetActive(true);
        //        Jaula11.SetActive(true);
        //        Jaula12.SetActive(true);
        //        Jaula13.SetActive(true);
        //        Jaula14.SetActive(true);
        //        Jaula15.SetActive(true);
        //        Jaula16.SetActive(true);
        //        Jaula17.SetActive(true);
        //        Jaula18.SetActive(false);
        //        Jaula19.SetActive(false);
        //        Jaula20.SetActive(false);
        //        break;

        //    case 18:
        //        Jaula1.SetActive(true);
        //        Jaula2.SetActive(true);
        //        Jaula3.SetActive(true);
        //        Jaula4.SetActive(true);
        //        Jaula5.SetActive(true);
        //        Jaula6.SetActive(true);
        //        Jaula7.SetActive(true);
        //        Jaula8.SetActive(true);
        //        Jaula9.SetActive(true);
        //        Jaula10.SetActive(true);
        //        Jaula11.SetActive(true);
        //        Jaula12.SetActive(true);
        //        Jaula13.SetActive(true);
        //        Jaula14.SetActive(true);
        //        Jaula15.SetActive(true);
        //        Jaula16.SetActive(true);
        //        Jaula17.SetActive(true);
        //        Jaula18.SetActive(true);
        //        Jaula19.SetActive(false);
        //        Jaula20.SetActive(false);
        //        break;

        //    case 19:
        //        Jaula1.SetActive(true);
        //        Jaula2.SetActive(true);
        //        Jaula3.SetActive(true);
        //        Jaula4.SetActive(true);
        //        Jaula5.SetActive(true);
        //        Jaula6.SetActive(true);
        //        Jaula7.SetActive(true);
        //        Jaula8.SetActive(true);
        //        Jaula9.SetActive(true);
        //        Jaula10.SetActive(true);
        //        Jaula11.SetActive(true);
        //        Jaula12.SetActive(true);
        //        Jaula13.SetActive(true);
        //        Jaula14.SetActive(true);
        //        Jaula15.SetActive(true);
        //        Jaula16.SetActive(true);
        //        Jaula17.SetActive(true);
        //        Jaula18.SetActive(true);
        //        Jaula19.SetActive(true);
        //        Jaula20.SetActive(false);
        //        break;

        //    case 20:
        //        Jaula1.SetActive(true);
        //        Jaula2.SetActive(true);
        //        Jaula3.SetActive(true);
        //        Jaula4.SetActive(true);
        //        Jaula5.SetActive(true);
        //        Jaula6.SetActive(true);
        //        Jaula7.SetActive(true);
        //        Jaula8.SetActive(true);
        //        Jaula9.SetActive(true);
        //        Jaula10.SetActive(true);
        //        Jaula11.SetActive(true);
        //        Jaula12.SetActive(true);
        //        Jaula13.SetActive(true);
        //        Jaula14.SetActive(true);
        //        Jaula15.SetActive(true);
        //        Jaula16.SetActive(true);
        //        Jaula17.SetActive(true);
        //        Jaula18.SetActive(true);
        //        Jaula19.SetActive(true);
        //        Jaula20.SetActive(true);
        //        break;
        //}
    }

    
}
