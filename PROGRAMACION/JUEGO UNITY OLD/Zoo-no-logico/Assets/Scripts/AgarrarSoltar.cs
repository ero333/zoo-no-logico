using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AgarrarSoltar : MonoBehaviour
{
    Vector3 MousePos;           

    public bool Agarre;         // Bool que detecta si nuestro Mouse tiene agarrado un Objeto

    public bool Seleccionado;   // Bool que detecta si un Sprite está sobre un slot

    public Vector3 vacio;       // Vector3 que obtiene la posición inicial de los objetos

    public int Contador;        // Int que detecta si el objeto está o no en un collider (bien al final está todo esto)



    void Awake()        // Método especial de Unity. Carga antes que el primer frame (esto cargaria antes que el Start()
    {
        vacio = transform.position; // Le da la posición actual a nuestro vector 3
    }
    void Start()
    {
        Seleccionado = false;

        Agarre = false;
    }

    void Update()
    {
        if(Contador == 0 && !Agarre)    // Si suelto el objeto y no está sobre un slot
        {
            transform.position = vacio;
        }
    }
    private Vector3 PosicionMouse() // Método de tipo Vector 3
    {
        return Camera.main.ScreenToWorldPoint(Input.mousePosition);


        /*  Busca el objeto "Main Camera" y obtiene el componente "Camera"
            Despues toma la posición del mouse en PANTALLA y la transforma en la posición dentro del World Space
            
            World Space basicamente sería la posición del objeto dentro de la escena, lo que veríamos en el componente Transform
        */
    }

    private void OnMouseDown()      // Método especial de Unity. Se activa cuando hacemos click sobre un objeto con colliders.
    {
        MousePos = gameObject.transform.position - PosicionMouse(); // Creamos un vector 3 según donde hacemos click en el objeto.
    }

    private void OnMouseDrag()                              // Método especial de Unity. Se activa cuando clickeamos y mantenemos dicho click sobre un objeto. Funciona como un Update()
    {
        transform.position = PosicionMouse() + MousePos;    // Cambia la posición del objeto según la posición del mouse
        Agarre = true;                                      // Si mantenemos agarrado, este bool es activo
    }

    private void OnMouseUp()        // Método especial de Unity. Se activa cuando soltamos el botón del mouse
    {
        Agarre = false;             // desactivo bool

    }

    public void OnTriggerStay2D(Collider2D collision)               // Detecta si un objeto está detectando otro Collider (Es parecido a OnTriggerEnter/OnTriggerExit)
    {
        if((collision.gameObject.tag == "Slot1") && !Agarre)        // Si el collider es del slot 1 y solté el mouse
        {
            transform.position = collision.transform.position;      // Mi objeto queda centrado en el slot 1

            collision.gameObject.tag =  "Slot1u";                   // Cambia nombre del tag para que otro no lo pueda agarrar

            Seleccionado = true;                                    // Nueva Condición
        }
        else if ((collision.gameObject.tag == "Slot2") && !Agarre)
        {
            transform.position = collision.transform.position;

            collision.gameObject.tag = "Slot2u";

            Seleccionado = true;
        }
        else if ((collision.gameObject.tag == "Slot3") && !Agarre)
        {
            transform.position = collision.transform.position;

            collision.gameObject.tag = "Slot3u";

            Seleccionado = true;
        }



        //---------------------------------------------------------------
        //Separación
        //Esto va mas que nada para no confundir. Sigue estando en OnTriggerStay


        if ((collision.gameObject.tag == "Slot1u") && Seleccionado) // Reacomoda el objeto para que no se salga de su lugar
        {
            transform.position = collision.transform.position;  

        }
        else if ((collision.gameObject.tag == "Slot2u") && Seleccionado)
        {
            transform.position = collision.transform.position;

        }
        else if ((collision.gameObject.tag == "Slot3u") && Seleccionado)
        {
            transform.position = collision.transform.position;

        }



        //---------------------------------------------------------------
        //Separación
        //Esto va mas que nada para no confundir. Sigue estando en OnTriggerStay

        if ((collision.gameObject.tag == "Slot1u") && !Seleccionado) // Para evitar errores
        {
            transform.position = vacio;
        }

        if ((collision.gameObject.tag == "Slot2u") && !Seleccionado)
        {
            transform.position = vacio;
        }

        if ((collision.gameObject.tag == "Slot3u") && !Seleccionado)
        {
            transform.position = vacio;
        }
    }

    private void OnTriggerExit2D(Collider2D collision)                  // Al salir del collider
    {
        if ((collision.gameObject.tag == "Slot1u") && Seleccionado)
        {
            collision.gameObject.tag = "Slot1";

            Seleccionado = false;

            transform.position = vacio;
        }

        if ((collision.gameObject.tag == "Slot2u") && Seleccionado)
        {
            collision.gameObject.tag = "Slot2";

            Seleccionado = false;

            transform.position = vacio;
        }

        if ((collision.gameObject.tag == "Slot3u") && Seleccionado)
        {
            collision.gameObject.tag = "Slot3";

            Seleccionado = false;

            transform.position = vacio;
        }




        //---------------------------------------------------------------
        //Separación
        //Esto va mas que nada para no confundir. Sigue estando en OnTriggerExit


        if ((collision.gameObject.tag == "Slot1"))  // Si el objeto sale de un slot
        {
            Contador--;
        }

        if ((collision.gameObject.tag == "Slot2"))
        {
            Contador--;
        }

        if ((collision.gameObject.tag == "Slot3"))
        {
            Contador--;
        }

    }

    private void OnTriggerEnter2D(Collider2D collision)
    {

        if ((collision.gameObject.tag == "Slot1"))  // Si el objeto entra en un slot
        {
            Contador++;
        }

        if ((collision.gameObject.tag == "Slot2"))
        {
            Contador++;
        }

        if ((collision.gameObject.tag == "Slot3"))
        {
            Contador++;
        }
    }



}
