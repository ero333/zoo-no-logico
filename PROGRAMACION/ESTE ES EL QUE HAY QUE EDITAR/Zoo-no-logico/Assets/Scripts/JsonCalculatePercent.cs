using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using System;
using UnityEngine.SceneManagement;

public class JsonCalculatePercent : MonoBehaviour {

    public TextAsset Cruzas;
    public Text porcentaje;
    public int index;


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
        public int porcentaje;
    }

    [System.Serializable]
    public class CruzaList
    {
        public Cruza[] cruza;
    }

    public CruzaList myCruzaList = new CruzaList();


    // Use this for initialization
    void Start()
    {
        PlayerPrefs.SetString("Slot1", "");
        PlayerPrefs.SetString("Slot2", "");
        PlayerPrefs.SetString("Slot3", "");

        //descripcion.text = myCruzaList.cruza[index].descripcion;
        //nombre.text = myCruzaList.cruza[index].nombre;
        //print(nombre.text);
    }

    // Update is called once per frame
    void Update()
    {
        
            animal1 = PlayerPrefs.GetString("Slot1").Replace(" ", "");
            animal2 = PlayerPrefs.GetString("Slot2").Replace(" ", ""); 
            animal3 = PlayerPrefs.GetString("Slot3").Replace(" ", ""); 
        if (animal1.Length > 1 && animal2.Length > 1 && animal3.Length > 1 )
        {
            animalesArray = new string[] { animal1, animal2, animal3 };
            Array.Sort(animalesArray);

            for (int i = 0; i < animalesArray.Length; i++)
            {
                animales += animalesArray[i];
            }
            print(animales);
            animales.Replace(" ", "");

            myCruzaList = JsonUtility.FromJson<CruzaList>(Cruzas.text);

            int forCounter = 0;
            bool matched = false;
            print(animales.ToUpper());
            for (int i = 0; i < myCruzaList.cruza.Length; i++)
            {

                //int idx = Array.IndexOf(myCruzaList.cruza[i].nombre.ToUpper().Replace(" ", ""), animales.ToUpper());
                if (myCruzaList.cruza[i].nombre.ToUpper().Replace(" ", "") == animales.ToUpper())
                {
                    index = forCounter;
                    matched = true;
                }
                forCounter = forCounter + 1;
                //print(myCruzaList.cruza[i].nombre.ToUpper().Replace(" ", ""));

            }
            porcentaje.text = myCruzaList.cruza[index].porcentaje.ToString();
        }
    }
}
