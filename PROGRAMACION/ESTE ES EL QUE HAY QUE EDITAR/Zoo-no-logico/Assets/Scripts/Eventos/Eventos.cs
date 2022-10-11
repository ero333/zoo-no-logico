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
    int eventNumber;

    public Sprite monedas;
    public Sprite popularidad;
    public Sprite animal;
    public Image opcion1GainImage;
    public Image opcion2GainImage;
    public Image opcion1LoseImage;
    public Image opcion2LoseImage;
    public Text opcion1GainText;
    public Text opcion2GainText;
    public Text opcion1LoseText;
    public Text opcion2LoseText;

    public GameObject opcion1Container;
    public GameObject opcion2Container;
    public Button opcion1Button;
    public Button opcion2Button;
    public Button continuar;

    void Start()
    {
       
        myEventoList = JsonUtility.FromJson<EventoList>(EventosJson.text);

        if (Title)
        {
            eventNumber = Random.Range(0, 3);
            PlayerPrefs.SetInt("eventNumber", eventNumber);
            Title.text = myEventoList.evento[eventNumber].titulo;
            Descripcion.text = myEventoList.evento[eventNumber].descripcion;
            Opcion1.text = myEventoList.evento[eventNumber].Opcion1Text;
            Opcion2.text = myEventoList.evento[eventNumber].Opcion2Text;
            opcion1GainText.text = myEventoList.evento[eventNumber].Opcion1WhichGain.ToString();
            opcion2GainText.text = myEventoList.evento[eventNumber].Opcion2WhichGain.ToString();
            opcion1LoseText.text = myEventoList.evento[eventNumber].Opcion1WhichLose.ToString();
            opcion2LoseText.text = myEventoList.evento[eventNumber].Opcion2WhichLose.ToString();
            setIcon(opcion1GainImage, myEventoList.evento[eventNumber].Opcion1WhatGain);
            setIcon(opcion2GainImage, myEventoList.evento[eventNumber].Opcion2WhatGain);
            setIcon(opcion1LoseImage, myEventoList.evento[eventNumber].Opcion1WhatLose);
            setIcon(opcion2LoseImage, myEventoList.evento[eventNumber].Opcion2WhatLose);
        }
    }

    void Update()
    {
    }

    public void setIcon(Image icon, string thing)
    {
        if(thing == "Popularidad")
        {
            icon.sprite = popularidad;
        } 
        else if(thing == "Moneditas")
        {
            icon.sprite = monedas;
        }
        else if(thing == "animal")
        {
            icon.sprite = animal;
        }
        else
        {
            icon.sprite = null;
            icon.color = new Color(0, 0, 0, 0);
        }
    }

    public void OnOpcion1Click()
    {

        int nroEvento = PlayerPrefs.GetInt("eventNumber");
        //print(myEventoList.evento[2]);
        print(myEventoList.evento[nroEvento].Opcion1WhichGain);
        print(myEventoList.evento[nroEvento].Opcion1WhichLose);
        PlayerPrefs.SetInt(myEventoList.evento[nroEvento].Opcion1WhatGain, PlayerPrefs.GetInt(myEventoList.evento[nroEvento].Opcion1WhatGain) + myEventoList.evento[nroEvento].Opcion1WhichGain);
        PlayerPrefs.SetInt(myEventoList.evento[nroEvento].Opcion1WhatLose, PlayerPrefs.GetInt(myEventoList.evento[nroEvento].Opcion1WhatLose) - myEventoList.evento[nroEvento].Opcion1WhichLose);
        opcion2Container.SetActive(false);
        opcion1Button.interactable = false;
        continuar.interactable = true;

    }

    public void OnOption2Click()
    {
        int nroEvento = PlayerPrefs.GetInt("eventNumber");
        print(myEventoList.evento[nroEvento].Opcion2WhatGain);
        print(myEventoList.evento[nroEvento].Opcion2WhichGain);
        PlayerPrefs.SetInt(myEventoList.evento[nroEvento].Opcion2WhatGain, PlayerPrefs.GetInt(myEventoList.evento[nroEvento].Opcion2WhatGain) + myEventoList.evento[nroEvento].Opcion2WhichGain);
        PlayerPrefs.SetInt(myEventoList.evento[nroEvento].Opcion2WhatLose, PlayerPrefs.GetInt(myEventoList.evento[nroEvento].Opcion2WhatLose) - myEventoList.evento[nroEvento].Opcion2WhichLose);
        opcion1Container.SetActive(false);
        opcion2Button.interactable = false;
        continuar.interactable = true;
    }

   }
