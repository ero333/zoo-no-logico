using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;


public class Comentarios : MonoBehaviour {

    private string[] Comentariosuwu = new string[] {"¡El Zorro-serpiente-araña se enredó en su propia telaraña!","¡La Araña-carpincho-murciélago le arranco un brazo a un cuidador con sus pinzas!","¡La Serpiente-zorro-cocodrilo se robó mi brazalete!"};
    private string[] Comentariosuwu2 = new string[] { "Unas arañas se metieron en los pantalones de un cuidador", "Una niña le dio algodón de azúcar a un cocodrilo", "¡voy a volver la próxima semana!", "¡Un carpincho estaba tomando mate!" };
    private int ComentarioRandom;
    private int ComentarioRandom2;
    public Text Comentario;
    public Text Comentario2;



    // Use this for initialization
    void Start () {

       ComentarioRandom = new System.Random().Next(0, 3);
        print(Comentariosuwu[ComentarioRandom]);

        Comentario = GameObject.FindGameObjectWithTag("ComentarioTexto").GetComponent<Text>();
        Comentario.text = Comentariosuwu[ComentarioRandom];

        ComentarioRandom2 = new System.Random().Next(0, 4);
        print(Comentariosuwu2[ComentarioRandom2]);

        Comentario2 = GameObject.FindGameObjectWithTag("ComentarioTexto2").GetComponent<Text>();
        Comentario2.text = Comentariosuwu2[ComentarioRandom2];

    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
