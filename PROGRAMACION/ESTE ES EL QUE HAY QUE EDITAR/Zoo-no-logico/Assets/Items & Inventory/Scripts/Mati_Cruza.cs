using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Mati_Cruza : MonoBehaviour
{
    public List<string> animales1 = new List<string>();                 // Lista que guarda los nombres de los animales recibidos
    public List<Mati_Animales> animales2 = new List<Mati_Animales>();   // Lista que guarda los animales recibidos (Scriptable Objects)

    public bool HayObjetos;                                             // Bool que detecta si están los 3 animales en los slots

    public Button Boton;                                                // Boton de cruza                                 

    public Mati_CruzasAnimales[] cruzas;                                // Lista de Cruzas. En el Start() busca los SO en la carpeta Resources.

    public Mati_CruzasAnimales RetenerAnimal;                           // Retiene los datos del Scriptable Object (llamemoslos SO) para poder detectar el costo y el porcentaje

    public string PC;

    private int divisorCosto = 4;

    // Start is called before the first frame update
    void Start()
    {
        HayObjetos = false;                                             // Determina que no estan los animales en los slots

        Boton.interactable = false;                                     // Desactiva el botón de cruza

        cruzas = Resources.LoadAll<Mati_CruzasAnimales>("");            // Busca los SO de las cruzas en la carpeta Resources

        PC = PlayerPrefs.GetString("PrimeraCombinacion");
    }

    public void Recibir(Mati_Animales animal)                           // Este método es llamado desde la tarjeta del animal
    {

        if (animales2.Count < 3)                                        // Si hay menos de 3 animales en los slots
        {
            animales2.Add(animal);                                      // Añade el animal a la Lista
            animales1.Add(animal.nombre);                               // Añade el nombre del animal a la lista
        }

        if (animales2.Count == 3)                                       // una vez que hay 3 animales en los slots
        {
            HayObjetos = true;                                          // Activa el bool

            Text TextoMonedas = GameObject.FindGameObjectWithTag("txt_monedas").GetComponent<Text>();                               // Variable de texto de monedas
            Text TextoPorcentaje = GameObject.FindGameObjectWithTag("txt_porcentaje").GetComponent<Text>();                         // Variable de texto de porcentaje
            foreach (Mati_CruzasAnimales a in cruzas)                                                                               // Por cada animal en la Lista de cruzas
            {
                if ((a.nombre.Contains(animales1[0])) && (a.nombre.Contains(animales1[1])) && (a.nombre.Contains(animales1[2])))    // Si un animal que está dentro del slot contiene parte del nombre de la cruza
                {
                    
                    int costo = ((int)a.precio / divisorCosto);
                    TextoMonedas.text = costo.ToString();            // cambia texto del precio
                    TextoPorcentaje.text = a.porcentaje.ToString();     // cambia texto del porcentaje
                    RetenerAnimal = a;                                  // Se retiene el animal
                    break;                                              // Sale del bucle
                }
            }
            if (RetenerAnimal)
            {
                if (RetenerAnimal.precio / divisorCosto <= PlayerPrefs.GetInt("Moneditas")) // Si el costo del animal es menor a la plata que tiene el jugador (Osea, si tengo plata para comprar)
                {
                    Boton.interactable = true;                              // Activa el botón
                }
            }
        }

    }

    public void Quitar(Mati_Animales animal)                            // Este método es llamado desde la tarjeta del animal
    {
        animales2.Remove(animal);                                       // Quita el animal de la lista
        animales1.Remove(animal.nombre);
        // Quita el nombre del animal de la lista

        if (animales2.Count < 3)                                        // Si hay menos de 3 animales en el slot
        {
            HayObjetos = false;                                         // Desactiva el bool
            Boton.interactable = false;                                 // Desactiva el botón

            Text TextoMonedas = GameObject.FindGameObjectWithTag("txt_monedas").GetComponent<Text>();                         
            Text TextoPorcentaje = GameObject.FindGameObjectWithTag("txt_porcentaje").GetComponent<Text>();

            TextoMonedas.text = 0.ToString();                           // El texto del costo muestra "0"
            TextoPorcentaje.text = "%";                                 // El texto del porcentaje.
        }
    }

    public void Craftear()                                              // Método llamado desde el botón de cruzar animal
    {

        int plata = PlayerPrefs.GetInt("Moneditas");                    // Creo variable que obtiene las monedas que tengo
        int total = plata - RetenerAnimal.precio/divisorCosto;                       // Hago la cuenta de mi plata - lo que cuesta el animal
        PlayerPrefs.SetInt("Moneditas", total);                         // El resultado de la cuenta se convierte en mi plata


        int random = Random.Range(0, 101);                              // número random del 0 al 100


        PlayerPrefs.SetInt("indexCurrentCruza",RetenerAnimal.id);       // ID para la pantalla de animal nuevo.

        foreach(string a in animales1)                                  // Por cada animal en la Lista de nombres
        {

            string cantidad = "Cantidad";                               // string
            if (a.Contains("Ara"))                                      // El playerpref de la Araña está como "CantidadArana".
            {
                print("SE DIO CUENTA QUE ES UNA ARAÑA");
                int restar = PlayerPrefs.GetInt(cantidad + "Arana");
                restar--;
                PlayerPrefs.SetInt(cantidad + "Arana", restar);
               
            }
            else if (a == "Ave Secretaria")
            {
                print("ES UN AVE");
                int restar = PlayerPrefs.GetInt(cantidad + "Ave");      // El playerpref del Ave Secretaria está como "CantidadAve"
                restar--;
                PlayerPrefs.SetInt(cantidad + "Ave", restar);
            }
            else
            {
                int restar = PlayerPrefs.GetInt(cantidad + a);          // Creo un int. valor = PlayerPref Cantidad + nombre del animal en la lista
                restar--;                                               // Resta 1
                PlayerPrefs.SetInt(cantidad + a, restar);               // Actualiza el PlayerPref
            }
        }


        if (random > RetenerAnimal.porcentaje)                                  // (Cruza fallida) Si el número random resulta ser mayor que el porcentaje del animal.
        {
            if(PlayerPrefs.GetString("PrimeraCombinacion") == "true")           // Si es la primera combinación que hago.
            {

                PlayerPrefs.SetString("PrimeraCombinacion", "false");           // Cambio el player pref a false
                SceneManager.LoadScene(6);                                      // Cambia a escena de animal nuevo
            }
            else                                                                // Si no es la primera combinación que hago
            {                                                           
                SceneManager.LoadScene(9);                                      // Cambio a escena de cruza fallida
            }
        }
        else                                                            // (Cruza exitosa) En el caso de que el número random NO sea mayor al porcentaje
        {
            SceneManager.LoadScene(6);                                  // Cambia a escena de animal nuevo
        }




        /*  if (animales1.Contains(animales1[0]) && animales1.Contains(animales1[1]) && animales1.Contains(animales1[2]))
          {
              foreach(Mati_CruzasAnimales a in cruzas)
              {
                  if((a.nombre.Contains(animales1[0])) && (a.nombre.Contains(animales1[1])) && (a.nombre.Contains(animales1[2])))
                  {
                      print(a.nombre);
                      break;
                  }
              }

          }*/

            /*else if (animales1.Contains("Araña") && animales1.Contains("Cocodrilo") && animales1.Contains("Carpincho"))
            {
                print("Araña_Cocodrilo_Carpincho");
            }
            else if (animales1.Contains("Murcielago") && animales1.Contains("Cocodrilo") && animales1.Contains("Carpincho"))
            {
                print("Cocodrilo_Carpincho_Murcielago");
            }*/

    }
}
