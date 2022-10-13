using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Jaula : MonoBehaviour
{

    public int[] JaulasActivas = new int[] { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };

    public GameObject[] JaulasArray;

    public TextAsset Cruzas;

    public int Monedas;

    [SerializeField] public GameObject testMonedas;
    [SerializeField] public GameObject testMonedas2;

    [System.Serializable]
    public class Cruza
    {
        public string id;
        public int popularidad;
    }
    [System.Serializable]
    public class CruzaList
    {
        public Cruza[] cruza;
    }

    public CruzaList myCruzaList = new CruzaList();

    void Awake()
    {
        GetJaulas();
    }

    // Use this for initialization
    void Start()
    {
        myCruzaList = JsonUtility.FromJson<CruzaList>(Cruzas.text);

        //print(JaulasArray[0]);
        //print(JaulasArray[3]);
        //print(JaulasArray[15]);

        int jaulas_ocupadas = PlayerPrefs.GetInt("JaulasOcupadas");
        int Monedas = PlayerPrefs.GetInt("Moneditas");

        
        

        //print(jaulas_ocupadas);

        //for (int i = 0; i < JaulasArray.Length; i++)
        //{
        //    JaulasArray[i].SetActive(false);
        //}

        //for (int i = 0; i < jaulas_ocupadas; i++)
        //{
        //    JaulasArray[i].SetActive(true);

        //    Sprite cruza_test_img = Resources.Load<Sprite>(PlayerPrefs.GetString("Jaula"+i));

        //    Image Jaula_image = JaulasArray[i].GetComponent<Image>();

        //    Jaula_image.sprite = cruza_test_img;
        //}

        for (int i = 0; i < JaulasActivas.Length; i++)
        {
            JaulasActivas[i] = PlayerPrefs.GetInt("JaulaActiva" + i, JaulasActivas[i]);
        }
        

        for (int i = 0; i < JaulasActivas.Length; i++)
        {
            if (JaulasActivas[i] == 1)
            {
                print("caso: " + i);

                JaulasArray[i].SetActive(true);

                print("Jaula" + i);

                print("jaula: " + PlayerPrefs.GetString("Jaula" + i));

                Sprite cruza_test_img = Resources.Load<Sprite>(PlayerPrefs.GetString("Jaula" + i));

                Image Jaula_image = JaulasArray[i].GetComponent<Image>();

                Jaula_image.sprite = cruza_test_img;

                print("cruza: " + cruza_test_img);
                print(JaulasActivas[i]);

            }
            else if (JaulasActivas[i] == 0)
            {
                print("caso else: " + i);
                if (i >= 0 && i <= 19)
                {
                    JaulasArray[i].SetActive(false);
                }
                
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        for (int i = 0; i < JaulasActivas.Length; i++)
        {
            JaulasActivas[i] = PlayerPrefs.GetInt("JaulaActiva" + i, JaulasActivas[i]);
        }

        //JaulaManager jm = FindObjectOfType<JaulaManager>();
        //print(jm.JaulasArray[3] + "TEST JM");
    }

    GameObject[] GetJaulas()
    {
        JaulasArray = GameObject.FindGameObjectsWithTag("Jaula");
        Array.Sort(JaulasArray, CompareJaulas);
        return JaulasArray;
    }

    private int CompareJaulas(GameObject x, GameObject y)
    {
        return Int16.Parse(x.name).CompareTo(Int16.Parse(y.name));
    }

    public void OcuparJaula (int costoJaula)
    {
        //int selectedJaula = -1;

        //for (int i = 0; i < JaulasActivas.Length; i++)
        //{
        //    if ((JaulasActivas[i] == 0) && selectedJaula == -1)
        //    {
        //        JaulasActivas[i] = 1;
        //        PlayerPrefs.SetInt("JaulaActiva" + i, 1);
        //        selectedJaula = i;
        //        print(i + " here");
        //    }
        //}

        //JaulasArray[selectedJaula].SetActive(true);

        //PlayerPrefs.SetInt("JaulasOcupadas", PlayerPrefs.GetInt("JaulasOcupadas") + 1);

        if (Monedas > costoJaula)
        {
            testMonedas.SetActive(true);
            Monedas -= costoJaula; // Al int con mis monedas le voy a restar el dato que recibe desde el botón
            PlayerPrefs.SetInt("Moneditas", Monedas);

            int selectedJaula = -1;

            for (int i = 0; i < JaulasActivas.Length; i++)
            {
                if ((JaulasActivas[i] == 0) && selectedJaula == -1)
                {
                    JaulasActivas[i] = 1;
                    PlayerPrefs.SetInt("JaulaActiva" + i, 1);
                    selectedJaula = i;
                    print(i + " here");
                }
            }

            JaulasArray[selectedJaula].SetActive(true);

            PlayerPrefs.SetInt("JaulasOcupadas", PlayerPrefs.GetInt("JaulasOcupadas") + 1);

        }
        else
        {
            testMonedas2.SetActive(true);
        }
    }

    public void DesocuparJaula (int selectedJaula)
    {
        print("DESOCUPAR ESTA FUNCIONANDO");
        PlayerPrefs.SetInt("popularidad", PlayerPrefs.GetInt("popularidad") - myCruzaList.cruza[int.Parse(PlayerPrefs.GetString("Jaula" + selectedJaula))].popularidad);


        JaulasArray[selectedJaula].SetActive(false);
        PlayerPrefs.SetInt("JaulaActiva" + selectedJaula, 0);
        PlayerPrefs.SetInt("JaulasOcupadas", PlayerPrefs.GetInt("JaulasOcupadas") - 1);
        PlayerPrefs.SetString("Jaula" + selectedJaula, "");

    }

    public int GetFirstUnoccupiedJaula ()
    {
        int selectedJaula = -1;

        for (int i = 0; i < JaulasActivas.Length; i++)
        {
            if ((JaulasActivas[i] == 0) && selectedJaula == -1)
            {
                selectedJaula = i;
            }
        }

        return selectedJaula;
    }
}
