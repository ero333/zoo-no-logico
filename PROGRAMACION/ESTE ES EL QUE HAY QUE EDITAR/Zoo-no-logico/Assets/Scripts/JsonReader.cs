using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using System;
using UnityEngine.SceneManagement;

public class JsonReader : MonoBehaviour {

    public TextAsset Cruzas;
    public Text descripcion;
    public Text dato1;
    public Text dato2;
    public Text dato3;
    public Text nombre;
    private int peligrosidad;
    public int index;
    public Image foto;
    public string nombreAnimal = "miNombre";

    public Sprite foto0;
    public Sprite foto1;
    public Sprite foto2;
    public Sprite foto3;
    public Sprite foto4;
    public Sprite foto5;
    public Sprite foto6;
    public Sprite foto7;
    public Sprite foto8;
    public Sprite foto9;
    public Sprite foto10;
    public Sprite foto11;
    public Sprite foto12;
    public Sprite foto13;
    public Sprite foto14;
    public Sprite foto15;
    public Sprite foto16;
    public Sprite foto17;
    public Sprite foto18;
    public Sprite foto19;
    public Sprite foto20;
    public Sprite foto21;
    public Sprite foto22;
    public Sprite foto23;
    public Sprite foto24;
    public Sprite foto25;
    public Sprite foto26;
    public Sprite foto27;
    public Sprite foto28;
    public Sprite foto29;
    public Sprite foto30;
    public Sprite foto31;
    public Sprite foto32;
    public Sprite foto33;
    public Sprite foto34;
    public Sprite fotoDefault;

    public Image estrella1;
    public Image estrella2;
    public Image estrella3;


    private string animal1;
    private string animal2;
    private string animal3; 
    private string animales;
    private string[] animalesArray;

    [System.Serializable]
    public class Cruza
    {
        public string id;
        public string nombre;
        public string descripcion;
        public string dato1;
        public string dato2;
        public string dato3;
        public int porcentaje;
        public int popularidad;
        public int peligrosidad;
        public int dinero;
    }

    [System.Serializable]
    public class CruzaList
    {
        public Cruza[] cruza;
    }

    public CruzaList myCruzaList = new CruzaList();


	// Use this for initialization
	void Start () {
        myCruzaList = JsonUtility.FromJson<CruzaList>(Cruzas.text);
        bool matched = false;
        if (PlayerPrefs.GetString("Slot1").Length > 1 && PlayerPrefs.GetString("Slot2").Length > 1 && PlayerPrefs.GetString("Slot3").Length > 1)
        {
            animal1 = PlayerPrefs.GetString("Slot1").Replace(" ", "");
            animal2 = PlayerPrefs.GetString("Slot2").Replace(" ", "");
            animal3 = PlayerPrefs.GetString("Slot3").Replace(" ", "");

            animalesArray = new string[] { animal1, animal2, animal3 };


            Array.Sort(animalesArray);



            for (int i = 0; i < animalesArray.Length; i++)
            {
                animales += animalesArray[i];
            }


            //index = Random.Range(0, 11);




            int forCounter = 0;
            
            for (int i = 0; i < myCruzaList.cruza.Length; i++)
            {

                //int idx = Array.IndexOf(myCruzaList.cruza[i].nombre.ToUpper().Replace(" ", ""), animales.ToUpper());
                if (myCruzaList.cruza[i].nombre.ToUpper().Replace(" ", "") == animales.ToUpper())
                {
                    index = forCounter;
                    matched = true;
                }
                forCounter = forCounter + 1;
            }

            
        }
        else
        {
            index = PlayerPrefs.GetInt("indexCurrentCruza");
        }

        PlayerPrefs.SetInt("indexCurrentCruza", index);
        PlayerPrefs.SetInt("Cruza" + index, 1);
        PlayerPrefs.SetString("nombreCurrentCruza", nombreAnimal);
        PlayerPrefs.SetString("descripcionCurrentCruza", myCruzaList.cruza[index].descripcion);
        PlayerPrefs.SetString("dato1CurrectCruza", myCruzaList.cruza[index].dato1);
        PlayerPrefs.SetString("dato2CurrectCruza", myCruzaList.cruza[index].dato2);
        PlayerPrefs.SetString("dato3CurrectCruza", myCruzaList.cruza[index].dato3);
        PlayerPrefs.SetInt("plataCurrentCruza", myCruzaList.cruza[index].dinero);

        switch (index)
        {
            case 0:
                foto.sprite = foto0;
                break;
            case 1:
                foto.sprite = foto1;
                break;
            case 2:
                foto.sprite = foto2;
                break;
            case 3:
                foto.sprite = foto3;
                break;
            case 4:
                foto.sprite = foto4;
                break;
            case 5:
                foto.sprite = foto5;
                break;
            case 6:
                foto.sprite = foto6;
                break;
            case 7:
                foto.sprite = foto7;
                break;
            case 8:
                foto.sprite = foto8;
                break;
            case 9:
                foto.sprite = foto9;
                break;
            case 10:
                foto.sprite = foto10;
                break;
            case 11:
                foto.sprite = foto11;
                break;
            case 12:
                foto.sprite = foto12;
                break;
            case 13:
                foto.sprite = foto13;
                break;
            case 14:
                foto.sprite = foto14;
                break;
            case 15:
                foto.sprite = foto15;
                break;
            case 16:
                foto.sprite = foto16;
                break;
            case 17:
                foto.sprite = foto17;
                break;
            case 18:
                foto.sprite = foto18;
                break;
            case 19:
                foto.sprite = foto19;
                break;
            case 20:
                foto.sprite = foto20;
                break;
            case 21:
                foto.sprite = foto21;
                break;
            case 22:
                foto.sprite = foto22;
                break;
            case 23:
                foto.sprite = foto23;
                break;
            case 24:
                foto.sprite = foto24;
                break;
            case 25:
                foto.sprite = foto25;
                break;
            case 26:
                foto.sprite = foto26;
                break;
            case 27:
                foto.sprite = foto27;
                break;
            case 28:
                foto.sprite = foto28;
                break;
            case 29:
                foto.sprite = foto29;
                break;
            case 30:
                foto.sprite = foto30;
                break;
            case 31:
                foto.sprite = foto31;
                break;
            case 32:
                foto.sprite = foto32;
                break;
            case 33:
                foto.sprite = foto33;
                break;
            case 34:
                foto.sprite = foto34;
                break;
	    case 35:
		foto.sprite = null;
		break;
            default:
                if(SceneManager.GetActiveScene().name != "Estasis"){SceneManager.LoadScene("menu-cruza-fallida");}
                break;
        }
        // if (!foto.sprite)
        // {
        //      if(SceneManager.GetActiveScene().name != "Estasis"){SceneManager.LoadScene("menu-cruza-fallida");}
        // }



        //CHEQUEAR QUE ESTO ESTE BIEN, SI TE TIRA A CRUZA FALLIDA SIEMPRE COMENTAR LAS 4 LINEAS DE ABAJO
        if (!matched)
        {
             if(SceneManager.GetActiveScene().name != "Estasis"){SceneManager.LoadScene("menu-cruza-fallida");}
	     index = 35;
        }

        if (index < 35)
        {
            descripcion.text = myCruzaList.cruza[index].descripcion;
            nombre.text = myCruzaList.cruza[index].nombre;
            dato1.text = myCruzaList.cruza[index].dato1;
            dato2.text = myCruzaList.cruza[index].dato2;
            dato3.text = myCruzaList.cruza[index].dato3;
        }
        else
        {
            nombre.text = "No hay animales";
            descripcion.text = "Hacé una cruza de animales para poder usar esto";
            dato1.text = "...";
            dato2.text = "...";
            dato3.text = "...";

        }

        if (index<35 && myCruzaList.cruza[index].peligrosidad == 1)
        {
            estrella1.color = Color.white;
            estrella2.color = Color.grey;
            estrella3.color = Color.grey;
        }
        if (index < 35 && myCruzaList.cruza[index].peligrosidad == 2)
        {
            estrella1.color = Color.white;
            estrella2.color = Color.white;
            estrella3.color = Color.grey;
        }
        if (index < 35 && myCruzaList.cruza[index].peligrosidad == 3)
        {
            estrella1.color = Color.white;
            estrella2.color = Color.white;
            estrella3.color = Color.white;
        }


    }
	
	// Update is called once per frame
	void Update () {
		print(index);
	}
}
