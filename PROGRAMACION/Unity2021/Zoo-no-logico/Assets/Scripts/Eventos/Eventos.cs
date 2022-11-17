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

    public Text mas1;
    public Text menos1;
    public Text mas2;
    public Text menos2;

    public Sprite monedas;
    public Sprite popularidad;
    public Sprite Carpincho;
    public Sprite Arana;
    public Sprite Cocodrilo;
    public Sprite Ave;
    public Sprite Murcielago;
    public Sprite Serpiente;
    public Sprite Zorro;
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

    [SerializeField] private GameObject ANALYTICS;

    void Start()
    {
       
        myEventoList = JsonUtility.FromJson<EventoList>(EventosJson.text);
        ANALYTICS = GameObject.FindGameObjectWithTag("ANALYTICS");

    }

    void Update()
    {
        if (Title)
        {
            eventNumber = PlayerPrefs.GetInt("eventNumber");
            Title.text = myEventoList.evento[eventNumber].titulo;
            Descripcion.text = myEventoList.evento[eventNumber].descripcion;
            Opcion1.text = myEventoList.evento[eventNumber].Opcion1Text;
            Opcion2.text = myEventoList.evento[eventNumber].Opcion2Text;
            if (myEventoList.evento[eventNumber].Opcion1WhatLose.Contains("Cantidad") && PlayerPrefs.GetInt(myEventoList.evento[eventNumber].Opcion1WhatLose) <= 0)
            {
                opcion1Button.interactable = false;
            }
            if (myEventoList.evento[eventNumber].Opcion2WhatLose.Contains("Cantidad") && PlayerPrefs.GetInt(myEventoList.evento[eventNumber].Opcion2WhatLose) <= 0)
            {
                opcion2Button.interactable = false;
            }
            setIcon(opcion1GainImage, myEventoList.evento[eventNumber].Opcion1WhatGain);
            setIcon(opcion2GainImage, myEventoList.evento[eventNumber].Opcion2WhatGain);
            setIcon(opcion1LoseImage, myEventoList.evento[eventNumber].Opcion1WhatLose);
            setIcon(opcion2LoseImage, myEventoList.evento[eventNumber].Opcion2WhatLose);
            if (myEventoList.evento[eventNumber].Opcion1WhatGain.Length < 2)
            {
                opcion1GainText.text = null;
                mas1.text = null;
            }
            else
            {
                opcion1GainText.text = myEventoList.evento[eventNumber].Opcion1WhichGain.ToString();
                mas1.text = "+";
            }
            if (myEventoList.evento[eventNumber].Opcion2WhatGain.Length<2)
            {
                opcion2GainText.text = null;
                mas2.text = null;
            }
            else
            {
                opcion2GainText.text = myEventoList.evento[eventNumber].Opcion2WhichGain.ToString();
                mas2.text = "+";
            }
            if (myEventoList.evento[eventNumber].Opcion1WhatLose.Length < 2)
            {
                opcion1LoseText.text = null;
                menos1.text = null;
            }
            else
            {
                opcion1LoseText.text = myEventoList.evento[eventNumber].Opcion1WhichLose.ToString();
                menos1.text = "-";
            }
            if (myEventoList.evento[eventNumber].Opcion2WhatLose.Length < 2)
            {
                opcion2LoseText.text = null;
                menos2.text = null;
            }
            else
            {
                opcion2LoseText.text = myEventoList.evento[eventNumber].Opcion2WhichLose.ToString();
                menos2.text = "-";
            }
        }
    }

    public void setIcon(Image icon, string thing)
    {
        if(thing == "Popularidad")
        {
            icon.sprite = popularidad;
            icon.color = new Color(1, 1, 1, 1);
        } 
        else if(thing == "Moneditas")
        {
            icon.sprite = monedas;
            icon.color = new Color(1, 1, 1, 1);
        }
        else if(thing == "CantidadCarpincho")
        {
            icon.sprite = Carpincho;
            icon.color = new Color(1, 1, 1, 1);
        }
        else if (thing == "CantidadArana")
        {
            icon.sprite = Arana;
            icon.color = new Color(1, 1, 1, 1);
        }
        else if (thing == "CantidadCocodrilo")
        {
            icon.sprite = Cocodrilo;
            icon.color = new Color(1, 1, 1, 1);
        }
        else if (thing == "CantidadAve")
        {
            icon.sprite = Ave;
            icon.color = new Color(1, 1, 1, 1);
        }
        else if (thing == "CantidadMurcielago")
        {
            icon.sprite = Murcielago;
            icon.color = new Color(1, 1, 1, 1);
        }
        else if (thing == "CantidadSerpiente")
        {
            icon.sprite = Serpiente;
            icon.color = new Color(1, 1, 1, 1);
        }
        else if (thing == "CantidadZorro")
        {
            icon.sprite = Zorro;
            icon.color = new Color(1, 1, 1, 1);
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
        PlayerPrefs.SetInt(myEventoList.evento[nroEvento].Opcion1WhatGain, PlayerPrefs.GetInt(myEventoList.evento[nroEvento].Opcion1WhatGain) + myEventoList.evento[nroEvento].Opcion1WhichGain);
        PlayerPrefs.SetInt(myEventoList.evento[nroEvento].Opcion1WhatLose, PlayerPrefs.GetInt(myEventoList.evento[nroEvento].Opcion1WhatLose) - myEventoList.evento[nroEvento].Opcion1WhichLose);
        opcion2Container.SetActive(false);
        opcion1Button.interactable = false;
        continuar.interactable = true;
        PlayerPrefs.SetInt("eventoElegido", 1);
        ANALYTICS.SendMessage("leer_evento");

    }

    public void OnOption2Click()
    {
        int nroEvento = PlayerPrefs.GetInt("eventNumber");
        PlayerPrefs.SetInt(myEventoList.evento[nroEvento].Opcion2WhatGain, PlayerPrefs.GetInt(myEventoList.evento[nroEvento].Opcion2WhatGain) + myEventoList.evento[nroEvento].Opcion2WhichGain);
        PlayerPrefs.SetInt(myEventoList.evento[nroEvento].Opcion2WhatLose, PlayerPrefs.GetInt(myEventoList.evento[nroEvento].Opcion2WhatLose) - myEventoList.evento[nroEvento].Opcion2WhichLose);
        opcion1Container.SetActive(false);
        opcion2Button.interactable = false;
        continuar.interactable = true;
        PlayerPrefs.SetInt("eventoElegido", 2);
        ANALYTICS.SendMessage("leer_evento");
    }

    public void ClearEvent()
    {
        eventNumber = Random.Range(0, 15);
        PlayerPrefs.SetInt("eventNumber", eventNumber);
        opcion1Container.SetActive(true);
        opcion2Button.interactable = true;
        continuar.interactable = false;
        opcion2Container.SetActive(true);
        opcion1Button.interactable = true;

    }

}
