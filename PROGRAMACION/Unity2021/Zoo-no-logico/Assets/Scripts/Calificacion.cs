using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Calificacion : MonoBehaviour
{

    [SerializeField] private GameObject ANALYTICS;

    public GameObject Pantalla;
    public GameObject CalifBoton;

    public int Activador;
    static public int DesactivarPantalla;


    //Estrellas Gráficos
    public Image EstrellaG1;
    public Image EstrellaG2;
    public Image EstrellaG3;
    public Image EstrellaG4;
    public Image EstrellaG5;

    //Estrellas Jugabilidad
    public Image EstrellaJ1;
    public Image EstrellaJ2;
    public Image EstrellaJ3;
    public Image EstrellaJ4;
    public Image EstrellaJ5;

    //Estrellas Redacción
    public Image EstrellaR1;
    public Image EstrellaR2;
    public Image EstrellaR3;
    public Image EstrellaR4;
    public Image EstrellaR5;

    //Estrellas Contenido
    public Image EstrellaC1;
    public Image EstrellaC2;
    public Image EstrellaC3;
    public Image EstrellaC4;
    public Image EstrellaC5;

    // Use this for initialization
    void Start()
    {
        Graficos(PlayerPrefs.GetInt("CalifGraficos"));
        Jugabilidad(PlayerPrefs.GetInt("CalifJugabilidad"));
        Redaccion(PlayerPrefs.GetInt("CalifRedaccion"));
        Redaccion(PlayerPrefs.GetInt("CalifContenido"));
        ANALYTICS = GameObject.FindGameObjectWithTag("ANALYTICS");
    }

    // Update is called once per frame
    void Update()
    {
        Activador = PlayerPrefs.GetInt("ActivadorCalificacion");

        if (Activador == 0)
        {
            CalifBoton.SetActive(false);
        }

        if (Activador == 1)
        {
            Pantalla.SetActive(true);
            CalifBoton.SetActive(false);
            PlayerPrefs.SetInt("ActivadorCalificacion", Activador);
        }

        if(DesactivarPantalla == 1)
        {
            Pantalla.SetActive(false);
            CalifBoton.SetActive(true);
        }

        
    }

    public void Abrir()
    {
        Pantalla.SetActive(true);
        CalifBoton.SetActive(false);
        DesactivarPantalla = 0;
    }

    public void Cerrar()
    {
        Pantalla.SetActive(false);
        CalifBoton.SetActive(true);
        DesactivarPantalla = 1;
        ANALYTICS.SendMessage("calificacion");
    }

    public void Graficos(int Num)
    {

        switch (Num)
        {
            case 1:

                EstrellaG1.color = new Color(0, 1, 1);
                EstrellaG2.color = new Color(0, 0, 0);
                EstrellaG3.color = new Color(0, 0, 0);
                EstrellaG4.color = new Color(0, 0, 0);
                EstrellaG5.color = new Color(0, 0, 0);
                break;

            case 2:

                EstrellaG1.color = new Color(0, 1, 1);
                EstrellaG2.color = new Color(0, 1, 1);
                EstrellaG3.color = new Color(0, 0, 0);
                EstrellaG4.color = new Color(0, 0, 0);
                EstrellaG5.color = new Color(0, 0, 0);

                break;

            case 3:

                EstrellaG1.color = new Color(0, 1, 1);
                EstrellaG2.color = new Color(0, 1, 1);
                EstrellaG3.color = new Color(0, 1, 1);
                EstrellaG4.color = new Color(0, 0, 0);
                EstrellaG5.color = new Color(0, 0, 0);

                break;

            case 4:
                EstrellaG1.color = new Color(0, 1, 1);
                EstrellaG2.color = new Color(0, 1, 1);
                EstrellaG3.color = new Color(0, 1, 1);
                EstrellaG4.color = new Color(0, 1, 1);
                EstrellaG5.color = new Color(0, 0, 0);

                break;

            case 5:
                EstrellaG1.color = new Color(0, 1, 1);
                EstrellaG2.color = new Color(0, 1, 1);
                EstrellaG3.color = new Color(0, 1, 1);
                EstrellaG4.color = new Color(0, 1, 1);
                EstrellaG5.color = new Color(0, 1, 1);

                break;
        }

        PlayerPrefs.SetInt("CalifGraficos", Num);


    }

    public void Jugabilidad(int Num)
    {

        switch (Num)
        {
            case 1:

                EstrellaJ1.color = new Color(0, 1, 1);
                EstrellaJ2.color = new Color(0, 0, 0);
                EstrellaJ3.color = new Color(0, 0, 0);
                EstrellaJ4.color = new Color(0, 0, 0);
                EstrellaJ5.color = new Color(0, 0, 0);
                break;

            case 2:

                EstrellaJ1.color = new Color(0, 1, 1);
                EstrellaJ2.color = new Color(0, 1, 1);
                EstrellaJ3.color = new Color(0, 0, 0);
                EstrellaJ4.color = new Color(0, 0, 0);
                EstrellaJ5.color = new Color(0, 0, 0);

                break;

            case 3:

                EstrellaJ1.color = new Color(0, 1, 1);
                EstrellaJ2.color = new Color(0, 1, 1);
                EstrellaJ3.color = new Color(0, 1, 1);
                EstrellaJ4.color = new Color(0, 0, 0);
                EstrellaJ5.color = new Color(0, 0, 0);

                break;

            case 4:
                EstrellaJ1.color = new Color(0, 1, 1);
                EstrellaJ2.color = new Color(0, 1, 1);
                EstrellaJ3.color = new Color(0, 1, 1);
                EstrellaJ4.color = new Color(0, 1, 1);
                EstrellaJ5.color = new Color(0, 0, 0);

                break;

            case 5:
                EstrellaJ1.color = new Color(0, 1, 1);
                EstrellaJ2.color = new Color(0, 1, 1);
                EstrellaJ3.color = new Color(0, 1, 1);
                EstrellaJ4.color = new Color(0, 1, 1);
                EstrellaJ5.color = new Color(0, 1, 1);

                break;
        }

        PlayerPrefs.SetInt("CalifJugabilidad", Num);


    }

    public void Redaccion(int Num)
    {

        switch (Num)
        {
            case 1:

                EstrellaR1.color = new Color(0, 1, 1);
                EstrellaR2.color = new Color(0, 0, 0);
                EstrellaR3.color = new Color(0, 0, 0);
                EstrellaR4.color = new Color(0, 0, 0);
                EstrellaR5.color = new Color(0, 0, 0);
                break;

            case 2:

                EstrellaR1.color = new Color(0, 1, 1);
                EstrellaR2.color = new Color(0, 1, 1);
                EstrellaR3.color = new Color(0, 0, 0);
                EstrellaR4.color = new Color(0, 0, 0);
                EstrellaR5.color = new Color(0, 0, 0);

                break;

            case 3:

                EstrellaR1.color = new Color(0, 1, 1);
                EstrellaR2.color = new Color(0, 1, 1);
                EstrellaR3.color = new Color(0, 1, 1);
                EstrellaR4.color = new Color(0, 0, 0);
                EstrellaR5.color = new Color(0, 0, 0);

                break;

            case 4:
                EstrellaR1.color = new Color(0, 1, 1);
                EstrellaR2.color = new Color(0, 1, 1);
                EstrellaR3.color = new Color(0, 1, 1);
                EstrellaR4.color = new Color(0, 1, 1);
                EstrellaR5.color = new Color(0, 0, 0);

                break;

            case 5:
                EstrellaR1.color = new Color(0, 1, 1);
                EstrellaR2.color = new Color(0, 1, 1);
                EstrellaR3.color = new Color(0, 1, 1);
                EstrellaR4.color = new Color(0, 1, 1);
                EstrellaR5.color = new Color(0, 1, 1);

                break;
        }

        PlayerPrefs.SetInt("CalifRedaccion", Num);


    }

    public void Contenido(int Num)
    {

        switch (Num)
        {
            case 1:

                EstrellaC1.color = new Color(0, 1, 1);
                EstrellaC2.color = new Color(0, 0, 0);
                EstrellaC3.color = new Color(0, 0, 0);
                EstrellaC4.color = new Color(0, 0, 0);
                EstrellaC5.color = new Color(0, 0, 0);
                break;

            case 2:

                EstrellaC1.color = new Color(0, 1, 1);
                EstrellaC2.color = new Color(0, 1, 1);
                EstrellaC3.color = new Color(0, 0, 0);
                EstrellaC4.color = new Color(0, 0, 0);
                EstrellaC5.color = new Color(0, 0, 0);

                break;

            case 3:

                EstrellaC1.color = new Color(0, 1, 1);
                EstrellaC2.color = new Color(0, 1, 1);
                EstrellaC3.color = new Color(0, 1, 1);
                EstrellaC4.color = new Color(0, 0, 0);
                EstrellaC5.color = new Color(0, 0, 0);

                break;

            case 4:
                EstrellaC1.color = new Color(0, 1, 1);
                EstrellaC2.color = new Color(0, 1, 1);
                EstrellaC3.color = new Color(0, 1, 1);
                EstrellaC4.color = new Color(0, 1, 1);
                EstrellaC5.color = new Color(0, 0, 0);

                break;

            case 5:
                EstrellaC1.color = new Color(0, 1, 1);
                EstrellaC2.color = new Color(0, 1, 1);
                EstrellaC3.color = new Color(0, 1, 1);
                EstrellaC4.color = new Color(0, 1, 1);
                EstrellaC5.color = new Color(0, 1, 1);

                break;
        }

        PlayerPrefs.SetInt("CalifContenido", Num);


    }

    

}