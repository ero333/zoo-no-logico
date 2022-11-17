using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MonedasTotales : MonoBehaviour {



    public Text textoMonedas;   // Variable con objeto Texto
    public int Monedas;         // Monedas agarradas
    public GameObject testMonedas;
    public GameObject Button;
    public GameObject testMonedas2;

    public GameObject Cosoprueba;

    [SerializeField] private GameObject ANALYTICS;

    // Start is called before the first frame update
    void Start()
    {
        textoMonedas = GameObject.FindGameObjectWithTag("TextoMonedas").GetComponent<Text>(); // Busca el objeto por su tag y le da el componente Text
        Monedas = PlayerPrefs.GetInt("Moneditas");
        ANALYTICS = GameObject.FindGameObjectWithTag("ANALYTICS");
    }


    // Update is called once per frame
    void Update()
    {

        textoMonedas.text = PlayerPrefs.GetInt("Moneditas").ToString();     
    }

    public void ComprarJaulas(int gastarPlata) // este método está recibiendo un int. Si nosotros llamamos este objeto con el botón, en el inspector deberia de aparecer un campo para rellenar
    {   
        if(Monedas > gastarPlata){
            testMonedas.SetActive(true);
        Monedas -= gastarPlata; // Al int con mis monedas le voy a restar el dato que recibe desde el botón
        PlayerPrefs.SetInt("Moneditas", Monedas);
        }
        else{
            testMonedas2.SetActive(true);
        }

    }

        public void Comprar(int gastarPlata) // este método está recibiendo un int. Si nosotros llamamos este objeto con el botón, en el inspector deberia de aparecer un campo para rellenar
    {   
        if(Monedas > gastarPlata){
        Monedas -= gastarPlata; // Al int con mis monedas le voy a restar el dato que recibe desde el botón
        PlayerPrefs.SetInt("Moneditas", Monedas);

        }

    }

    public void Agregar(int agregarPlata) // este método está recibiendo un int. Si nosotros llamamos este objeto con el botón, en el inspector deberia de aparecer un campo para rellenar
    {
        Monedas += agregarPlata; // Al int con mis monedas le voy a agregar el dato que recibe desde el botón
        PlayerPrefs.SetInt("Moneditas", Monedas);
    }

    public void AgregarButton()
    {
        Button.SetActive(true);
    }

    public void BorrarButton()
    {
        Destroy(Button);
    }
    //cuando el valor de monedas es menor a 100 se desactiva el boton de compra
    // public void InhabilitarButton(){
    //     if(Monedas>= 100){
    //         Button.SetActive(true);
    //     }
    //     else{
    //         Button.SetActive(false);
    //     }
    // }


    //COMPRAR ANIMALES :)

    public void ComprarCarpincho(int gastarPlata) // este método está recibiendo un int. Si nosotros llamamos este objeto con el botón, en el inspector deberia de aparecer un campo para rellenar
    {
        if (Monedas > gastarPlata)
        {
            Monedas -= gastarPlata; // Al int con mis monedas le voy a restar el dato que recibe desde el botón
            PlayerPrefs.SetInt("Moneditas", Monedas);

            PlayerPrefs.SetInt("vezCompra", PlayerPrefs.GetInt("vezCompra") + 1);
            PlayerPrefs.SetString("animalCompra", "Carpincho");

            PlayerPrefs.SetInt("carpinchosTotales", PlayerPrefs.GetInt("carpinchosTotales") + 1);

            Cosoprueba.SendMessage("SumarCantidadCarpincho");
            ANALYTICS.SendMessage("comprar");
        }
    }

    public void ComprarArana(int gastarPlata) // este método está recibiendo un int. Si nosotros llamamos este objeto con el botón, en el inspector deberia de aparecer un campo para rellenar
    {
        if (Monedas > gastarPlata)
        {
            Monedas -= gastarPlata; // Al int con mis monedas le voy a restar el dato que recibe desde el botón
            PlayerPrefs.SetInt("Moneditas", Monedas);

            PlayerPrefs.SetInt("vezCompra", PlayerPrefs.GetInt("vezCompra") + 1);
            PlayerPrefs.SetString("animalCompra", "Arana");

            PlayerPrefs.SetInt("aranasTotales", PlayerPrefs.GetInt("aranasTotales") + 1);
            Cosoprueba.SendMessage("SumarCantidadArana");
            ANALYTICS.SendMessage("comprar");
        }
    }

    public void ComprarCocodrilo(int gastarPlata) // este método está recibiendo un int. Si nosotros llamamos este objeto con el botón, en el inspector deberia de aparecer un campo para rellenar
    {
        if (Monedas > gastarPlata)
        {
            Monedas -= gastarPlata; // Al int con mis monedas le voy a restar el dato que recibe desde el botón
            PlayerPrefs.SetInt("Moneditas", Monedas);

            PlayerPrefs.SetInt("vezCompra", PlayerPrefs.GetInt("vezCompra") + 1);
            PlayerPrefs.SetString("animalCompra", "Cocodrilo");

            PlayerPrefs.SetInt("cocodrilosTotales", PlayerPrefs.GetInt("cocodrilosTotales") + 1);
            Cosoprueba.SendMessage("SumarCantidadCocodrilo");
            ANALYTICS.SendMessage("comprar");
        }
    }

    public void ComprarZorro(int gastarPlata) // este método está recibiendo un int. Si nosotros llamamos este objeto con el botón, en el inspector deberia de aparecer un campo para rellenar
    {
        if (Monedas > gastarPlata)
        {
            Monedas -= gastarPlata; // Al int con mis monedas le voy a restar el dato que recibe desde el botón
            PlayerPrefs.SetInt("Moneditas", Monedas);

            PlayerPrefs.SetInt("vezCompra", PlayerPrefs.GetInt("vezCompra") + 1);
            PlayerPrefs.SetString("animalCompra", "Zorro");

            PlayerPrefs.SetInt("zorrosTotales", PlayerPrefs.GetInt("zorrosTotales") + 1);
            Cosoprueba.SendMessage("SumarCantidadZorro");
            ANALYTICS.SendMessage("comprar");
        }
    }

    public void ComprarMurcielago(int gastarPlata) // este método está recibiendo un int. Si nosotros llamamos este objeto con el botón, en el inspector deberia de aparecer un campo para rellenar
    {
        if (Monedas > gastarPlata)
        {
            Monedas -= gastarPlata; // Al int con mis monedas le voy a restar el dato que recibe desde el botón
            PlayerPrefs.SetInt("Moneditas", Monedas);

            PlayerPrefs.SetInt("vezCompra", PlayerPrefs.GetInt("vezCompra") + 1);
            PlayerPrefs.SetString("animalCompra", "Murcielago");

            PlayerPrefs.SetInt("murcielagosTotales", PlayerPrefs.GetInt("murcielagosTotales") + 1);
            Cosoprueba.SendMessage("SumarCantidadMurcielago");
            ANALYTICS.SendMessage("comprar");
        }
    }

    public void ComprarSerpiente(int gastarPlata) // este método está recibiendo un int. Si nosotros llamamos este objeto con el botón, en el inspector deberia de aparecer un campo para rellenar
    {
        if (Monedas > gastarPlata)
        {
            Monedas -= gastarPlata; // Al int con mis monedas le voy a restar el dato que recibe desde el botón
            PlayerPrefs.SetInt("Moneditas", Monedas);

            PlayerPrefs.SetInt("vezCompra", PlayerPrefs.GetInt("vezCompra") + 1);
            PlayerPrefs.SetString("animalCompra", "Serpiente");

            PlayerPrefs.SetInt("serpientesTotales", PlayerPrefs.GetInt("serpientesTotales") + 1);
            Cosoprueba.SendMessage("SumarCantidadSerpiente");
            ANALYTICS.SendMessage("comprar");
        }
    }

    public void ComprarAve(int gastarPlata) // este método está recibiendo un int. Si nosotros llamamos este objeto con el botón, en el inspector deberia de aparecer un campo para rellenar
    {
        if (Monedas > gastarPlata)
        {
            Monedas -= gastarPlata; // Al int con mis monedas le voy a restar el dato que recibe desde el botón
            PlayerPrefs.SetInt("Moneditas", Monedas);

            PlayerPrefs.SetInt("vezCompra", PlayerPrefs.GetInt("vezCompra") + 1);
            PlayerPrefs.SetString("animalCompra", "Ave");

            PlayerPrefs.SetInt("avesTotales", PlayerPrefs.GetInt("avesTotales") + 1);
            Cosoprueba.SendMessage("SumarCantidadAve");
            ANALYTICS.SendMessage("comprar");
        }
    }

}