using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using System;
using UnityEngine.SceneManagement;

public class JsonReader : MonoBehaviour {

    public TextAsset Cruzas;
    public Text descripcion;
    public Text nombre;
    public int index;
    public Image foto;

    public Sprite foto0;
    public Sprite foto1;
    public Sprite foto2;
    public Sprite foto3;
    public Sprite foto4;
    public Sprite foto5;
    public Sprite foto6;
    public Sprite foto7;
    public Sprite foto8;
    public Sprite foto9;
    public Sprite foto10;
    public Sprite foto11;

    private string animal1;
    private string animal2;
    private string animal3; 
    private string animales;
    private string[] animalesArray;

    [System.Serializable]
    public class Cruza
    {
        public string id;
        public string nombre;
        public string descripcion;
        public int porcentaje;
        public int popularidad;
        public int dinero;
    }

    [System.Serializable]
    public class CruzaList
    {
        public Cruza[] cruza;
    }

    public CruzaList myCruzaList = new CruzaList();


	// Use this for initialization
	void Start () {
        animal1 = PlayerPrefs.GetString("Slot1");
        animal2 = PlayerPrefs.GetString("Slot2");
        animal3 = PlayerPrefs.GetString("Slot3");

        animalesArray = new string[] { animal1, animal2, animal3};
        print(animalesArray[2]);
    
        Array.Sort(animalesArray);
        print(animalesArray[2]);


        for(int i = 0; i<animalesArray.Length; i++)
        {
            animales += animalesArray[i];
        }
        print(animales);

        //index = Random.Range(0, 11);

        switch (index)
        {
            case 0:
                foto.sprite = foto0;
                break;
            case 1:
                foto.sprite = foto1;
                break;
            case 2:
                foto.sprite = foto2;
                break;
            case 3:
                foto.sprite = foto3;
                break;
            case 4:
                foto.sprite = foto4;
                break;
            case 5:
                foto.sprite = foto5;
                break;
            case 6:
                foto.sprite = foto6;
                break;
            case 7:
                foto.sprite = foto7;
                break;
            case 8:
                foto.sprite = foto8;
                break;
            case 9:
                foto.sprite = foto9;
                break;
            case 10:
                foto.sprite = foto10;
                break;
            case 11:
                foto.sprite = foto11;
                break;
            default:
                foto.sprite = foto0;
                break;
        }

        myCruzaList = JsonUtility.FromJson<CruzaList>(Cruzas.text);

        int forCounter = 0;
        for (int i = 0; i < myCruzaList.cruza.Length; i++)
        {

            //int idx = Array.IndexOf(myCruzaList.cruza[i].nombre.ToUpper().Replace(" ", ""), animales.ToUpper());
            if (myCruzaList.cruza[i].nombre.ToUpper().Replace(" ", "") == animales.ToUpper())
            {
                index = forCounter;
            }
            forCounter = forCounter + 1;
            //print(myCruzaList.cruza[i].nombre.ToUpper().Replace(" ", ""));
        }

        //CHEQUEAR QUE ESTO ESTE BIEN, SI TE TIRA A CRUZA FALLIDA SIEMPRE COMENTAR LAS 4 LINEAS DE ABAJO
        if(forCounter == 0)
        {
            SceneManager.LoadScene("menu-cruza-fallida");
        }


        descripcion.text = myCruzaList.cruza[index].descripcion;
        nombre.text = myCruzaList.cruza[index].nombre;
        print(nombre.text);



    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
