using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EventoCartas : MonoBehaviour {

    public GameObject IconoNoti;
    public int ActivadorEvento = 0;
    int Noti;


	// Use this for initialization
	void Start () {

       
	}
	
	// Update is called once per frame
	void Update () {

        ActivadorEvento = PlayerPrefs.GetInt("EventoCartas");
        Noti = PlayerPrefs.GetInt("DesactivarNoti");




        if (ActivadorEvento == 1 && Noti == 0)
        {
            IconoNoti.SetActive(true);
        }

        else
        {
            IconoNoti.SetActive(false);
        }

        }
	}



