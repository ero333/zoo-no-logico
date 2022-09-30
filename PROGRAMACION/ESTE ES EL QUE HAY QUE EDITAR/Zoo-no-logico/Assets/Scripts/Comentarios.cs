using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;


public class Comentarios : MonoBehaviour {

    private string[] Comentariosuwu = new string[] {"¡El Zorro-serpiente-araña se enredó en su propia telaraña!","¡La Araña-carpincho-murciélago le arranco un brazo a un cuidador con sus pinzas!","¡La Serpiente-zorro-cocodrilo se robó mi brazalete!"};
    private int ComentarioRandom;
    public Text Comentario;
    



	// Use this for initialization
	void Start () {

       ComentarioRandom = new System.Random().Next(0, 3);
        print(Comentariosuwu[ComentarioRandom]);

        Comentario = GameObject.FindGameObjectWithTag("ComentarioTexto").GetComponent<Text>();
        Comentario.text = Comentariosuwu[ComentarioRandom];




    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
