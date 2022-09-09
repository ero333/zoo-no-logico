using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MonedasTotales : MonoBehaviour {



    public Text textoMonedas;   // Variable con objeto Texto
    public int Monedas;         // Monedas agarradas

    public GameObject Button;



    // Start is called before the first frame update
    void Start()
    {
        textoMonedas = GameObject.FindGameObjectWithTag("TextoMonedas").GetComponent<Text>(); // Busca el objeto por su tag y le da el componente Text
        Monedas = PlayerPrefs.GetInt("Moneditas");
       // Monedas = PlayerPref.GetInt("Monedas", ValorDefaultPorSiNoExiste);
    }


    // Update is called once per frame
    void Update()
    {

        textoMonedas.text = Monedas.ToString();     // Convierte los Ints en Strings para el texto, nos dice las monedas agarradas
                                                    //PlayerPrefs.DeleteAll();
                                                    //If(PlayerPrefs.HasKey("Moneditas"))
                                                    //{
                                                    //print("tenemos monedas");
                                                    //}
    }

    public void Comprar(int gastarPlata) // este método está recibiendo un int. Si nosotros llamamos este objeto con el botón, en el inspector deberia de aparecer un campo para rellenar
    {   
        Monedas -= gastarPlata; // Al int con mis monedas le voy a restar el dato que recibe desde el botón
        PlayerPrefs.SetInt("Moneditas", Monedas);
    }

    public void Agregar(int agregarPlata) // este método está recibiendo un int. Si nosotros llamamos este objeto con el botón, en el inspector deberia de aparecer un campo para rellenar
    {
        Monedas += agregarPlata; // Al int con mis monedas le voy a restar el dato que recibe desde el botón
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

}