using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CuposJaulas : MonoBehaviour
{


    //GameObject Jaula1;
    private int numJaulasOcupadas;
    public Text textoJaulas;
    public TextAsset Cruzas;


    [System.Serializable]
    public class Cruza
    {
        public string id;
        public string nombre;
        public int dinero;
        public int popularidad;
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
        textoJaulas = GameObject.FindGameObjectWithTag("TextoJaulas").GetComponent<Text>();
        numJaulasOcupadas = PlayerPrefs.GetInt("Jaulitas");
        myCruzaList = JsonUtility.FromJson<CruzaList>(Cruzas.text);

    }

    // Update is called once per frame
    void Update()
    {
        textoJaulas.text = numJaulasOcupadas.ToString();

        numJaulasOcupadas = PlayerPrefs.GetInt("Jaulitas");



        if (Input.GetKeyDown("space"))
        {
            numJaulasOcupadas++;
            PlayerPrefs.SetInt("Jaulitas", numJaulasOcupadas);
        }
    }

    

    public void OcuparJaulas()
    {
        numJaulasOcupadas++;
        PlayerPrefs.SetInt("Jaulitas", numJaulasOcupadas);
        int cruza = PlayerPrefs.GetInt("indexCurrentCruza");
        switch (numJaulasOcupadas)
        {
            case 1:
                PlayerPrefs.SetInt("Jaula1", cruza);
                break;
            case 2:
                PlayerPrefs.SetInt("Jaula2", cruza);
                break;
            case 3:
                PlayerPrefs.SetInt("Jaula3", cruza);
                break;
            case 4:
                PlayerPrefs.SetInt("Jaula4", cruza);
                break;
            case 5:
                PlayerPrefs.SetInt("Jaula5", cruza);
                break;
        }

        if (numJaulasOcupadas > 5)
        {
            numJaulasOcupadas = 5;
            textoJaulas.text = numJaulasOcupadas.ToString();
            PlayerPrefs.SetInt("Jaulitas", numJaulasOcupadas);
        }

        int popularidad = myCruzaList.cruza[cruza].popularidad;
        int popularidadOld = PlayerPrefs.GetInt("Popularidad");
        PlayerPrefs.SetInt("Popularidad", popularidad + popularidadOld);

    }

    

    public void DesocuparJaulas()
    {
        numJaulasOcupadas--;
        PlayerPrefs.SetInt("Jaulitas", numJaulasOcupadas);

        if (numJaulasOcupadas <= 0)
        {
            numJaulasOcupadas = 0;
            textoJaulas.text = numJaulasOcupadas.ToString();
            PlayerPrefs.SetInt("Jaulitas", numJaulasOcupadas);
        }
    }


}
