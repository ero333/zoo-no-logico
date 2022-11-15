using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class StasisManager : MonoBehaviour
{
    public TextAsset Cruzas;
    public Text descripcion;
    public Text dato1;
    public Text dato2;
    public Text dato3;
    public Text nombre;
    public Text plata;
    private int peligrosidad;
    public int index;
    public Image foto;
    public string nombreAnimal = "miNombre";

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



    public GameObject StasisSlot;

    public int[] StasisActivas = new int[] { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    private void Awake()
    {
        for (int i = 0; i < StasisActivas.Length; i++)
        {
            StasisActivas[i] = PlayerPrefs.GetInt("StasisActiva" + i);
        }

        for (int i = 0; i < StasisActivas.Length; i++)
        {
            if (StasisActivas[i] == 1)
            {
                PlayerPrefs.SetInt("StasisPosition", i);
                break;
            }
        }
    }

    // Use this for initialization
    void Start()
    {


        myCruzaList = JsonUtility.FromJson<CruzaList>(Cruzas.text);

        GetCruza(PlayerPrefs.GetInt("StasisPosition"));
        print(index);

    }

    void Update()
    {
        if(plata.text == "0"){
            PlayerPrefs.SetInt("plataCurrentCruza", 0);
        }
    }

    void GetCruza (int index)
    {
        if (PlayerPrefs.GetString("Stasis" + index) != "" && StasisActivas[index] == 1)
        {
            Sprite cruza_img = Resources.Load<Sprite>(PlayerPrefs.GetString("Stasis" + index));

            Image stasis_img = StasisSlot.GetComponent<Image>();

            stasis_img.sprite = cruza_img;

            print(cruza_img);

            print("index test: " + PlayerPrefs.GetString("Stasis" + index));

            PlayerPrefs.SetInt("indexCurrentCruza", index);
            PlayerPrefs.SetInt("Cruza" + int.Parse(PlayerPrefs.GetString("Stasis" + index)), 1);
            PlayerPrefs.SetString("nombreCurrentCruza", nombreAnimal);
            PlayerPrefs.SetString("descripcionCurrentCruza", myCruzaList.cruza[int.Parse(PlayerPrefs.GetString("Stasis" + index))].descripcion);
            PlayerPrefs.SetString("dato1CurrectCruza", myCruzaList.cruza[int.Parse(PlayerPrefs.GetString("Stasis" + index))].dato1);
            PlayerPrefs.SetString("dato2CurrectCruza", myCruzaList.cruza[int.Parse(PlayerPrefs.GetString("Stasis" + index))].dato2);
            PlayerPrefs.SetString("dato3CurrectCruza", myCruzaList.cruza[int.Parse(PlayerPrefs.GetString("Stasis" + index))].dato3);
            PlayerPrefs.SetInt("plataCurrentCruza", myCruzaList.cruza[int.Parse(PlayerPrefs.GetString("Stasis" + index))].dinero);

            if (index < 35)
            {
                print("index cruza: " + index);
                descripcion.text = myCruzaList.cruza[int.Parse(PlayerPrefs.GetString("Stasis" + index))].descripcion;
                nombre.text = myCruzaList.cruza[int.Parse(PlayerPrefs.GetString("Stasis" + index))].nombre;
                dato1.text = myCruzaList.cruza[int.Parse(PlayerPrefs.GetString("Stasis" + index))].dato1;
                dato2.text = myCruzaList.cruza[int.Parse(PlayerPrefs.GetString("Stasis" + index))].dato2;
                dato3.text = myCruzaList.cruza[int.Parse(PlayerPrefs.GetString("Stasis" + index))].dato3;
                plata.text = myCruzaList.cruza[int.Parse(PlayerPrefs.GetString("Stasis" + index))].dinero.ToString();
            }
            else
            {
                nombre.text = "No hay animales";
                descripcion.text = "Hacé una cruza de animales para poder usar esto";
                dato1.text = "...";
                dato2.text = "...";
                dato3.text = "...";
                plata.text = "0";
                PlayerPrefs.SetInt("plataCurrentCruza", 0);

            }

            if (index < 35 && myCruzaList.cruza[int.Parse(PlayerPrefs.GetString("Stasis" + index))].peligrosidad == 1)
            {
                estrella1.color = Color.white;
                estrella2.color = Color.grey;
                estrella3.color = Color.grey;
            }
            if (index < 35 && myCruzaList.cruza[int.Parse(PlayerPrefs.GetString("Stasis" + index))].peligrosidad == 2)
            {
                estrella1.color = Color.white;
                estrella2.color = Color.white;
                estrella3.color = Color.grey;
            }
            if (index < 35 && myCruzaList.cruza[int.Parse(PlayerPrefs.GetString("Stasis" + index))].peligrosidad == 3)
            {
                estrella1.color = Color.white;
                estrella2.color = Color.white;
                estrella3.color = Color.white;
            }
        }
        else
        {
            Sprite cruza_img = Resources.Load<Sprite>("-1");

            Image stasis_img = StasisSlot.GetComponent<Image>();

            stasis_img.sprite = cruza_img;

            nombre.text = "No hay animales";
            descripcion.text = "Hacé una cruza de animales para poder usar esto";
            dato1.text = "...";
            dato2.text = "...";
            dato3.text = "...";
            plata.text = "0";
            PlayerPrefs.SetInt("plataCurrentCruza", 0);
        }
        
    }

    public void NextStasisSlot ()
    {
        if (PlayerPrefs.GetInt("StasisPosition") < 9)
        {
            PlayerPrefs.SetInt("StasisPosition", PlayerPrefs.GetInt("StasisPosition") + 1);
            print(PlayerPrefs.GetInt("StasisPosition"));
            GetCruza(PlayerPrefs.GetInt("StasisPosition"));
        }
    }

    public void PreviousStasisSlot ()
    {
        if (PlayerPrefs.GetInt("StasisPosition") > 0)
        {
            PlayerPrefs.SetInt("StasisPosition", PlayerPrefs.GetInt("StasisPosition") - 1);
            print(PlayerPrefs.GetInt("StasisPosition"));
            GetCruza(PlayerPrefs.GetInt("StasisPosition"));
        }
    }
}
