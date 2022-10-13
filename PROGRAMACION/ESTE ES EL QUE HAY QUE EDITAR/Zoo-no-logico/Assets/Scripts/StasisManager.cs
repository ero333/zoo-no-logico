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
        PlayerPrefs.SetInt("StasisPosition", 0);

        for (int i = 0; i < StasisActivas.Length; i++)
        {
            StasisActivas[i] = PlayerPrefs.GetInt("StasisActiva" + i);
        }
    }

    // Use this for initialization
    void Start()
    {


        myCruzaList = JsonUtility.FromJson<CruzaList>(Cruzas.text);

        GetCruza(PlayerPrefs.GetInt("StasisPosition"));

    }

    void Update()
    {
    }

    void GetCruza (int index)
    {
        if (PlayerPrefs.GetString("Stasis" + index) != "" && StasisActivas[index] == 1)
        {
            Sprite cruza_img = Resources.Load<Sprite>(PlayerPrefs.GetString("Stasis" + index));

            Image stasis_img = StasisSlot.GetComponent<Image>();

            stasis_img.sprite = cruza_img;

            print(cruza_img);

            PlayerPrefs.SetInt("indexCurrentCruza", index);
            PlayerPrefs.SetInt("Cruza" + index, 1);
            PlayerPrefs.SetString("nombreCurrentCruza", nombreAnimal);
            PlayerPrefs.SetString("descripcionCurrentCruza", myCruzaList.cruza[index].descripcion);
            PlayerPrefs.SetString("dato1CurrectCruza", myCruzaList.cruza[index].dato1);
            PlayerPrefs.SetString("dato2CurrectCruza", myCruzaList.cruza[index].dato2);
            PlayerPrefs.SetString("dato3CurrectCruza", myCruzaList.cruza[index].dato3);
            PlayerPrefs.SetInt("plataCurrentCruza", myCruzaList.cruza[index].dinero);

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

            if (index < 35 && myCruzaList.cruza[index].peligrosidad == 1)
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
