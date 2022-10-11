using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Eventos : MonoBehaviour {

    public TextAsset EventosJson;
    [System.Serializable]
    public class EventoJson
    {
        public string id;
        public string titulo;
        public string descripcion;
        public string Opcion1Text;
        public string Opcion1WhatGain;
        public int Opcion1WhichGain;
        public string Opcion1WhatLose;
        public int Opcion1WhichLose;
        public string Opcion2Text;
        public string Opcion2WhatGain;
        public int Opcion2WhichGain;
        public string Opcion2WhatLose;
        public int Opcion2WhichLose;
    }
    [System.Serializable]
    public class EventoList
    {
        public EventoJson[] evento;
    }

    public EventoList myEventoList = new EventoList();

    public Text Title;
    public Text Descripcion;
    public Text Opcion1;
    public Text Opcion2;
    private int eventNumber;

    void Start()
    {
        eventNumber = Random.Range(0, 3);
        myEventoList = JsonUtility.FromJson<EventoList>(EventosJson.text);
        Title.text = myEventoList.evento[eventNumber].titulo;
        Descripcion.text = myEventoList.evento[eventNumber].descripcion;
        Opcion1.text = myEventoList.evento[eventNumber].Opcion1Text;
        Opcion2.text = myEventoList.evento[eventNumber].Opcion2Text;
    }

    void Update()
    {
    }

    public void onOpcion1Click()
    {
        //PlayerPrefs.SetInt()
    }

    public void OnOption2Click()
    {

    }

   }
