using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class NewDayMoney : MonoBehaviour {

    public Text newMoneyText;
    public TextAsset Cruzas;

    [System.Serializable]
    public class Cruza
    {
        public string id;
        public string nombre;
        public int dinero;
        public int popularidad;
    }

    private int cage1Money = 0;
    private int cage2Money = 0;
    private int cage3Money = 0;
    private int cage4Money = 0;
    private int cage5Money = 0;
    private float popularity = 75;
    public float cageDivisor = 4;
    private float popularityMultipliyer;
    private float newMoney;
    private int newMoneyInt;
    float Monedas;
    private int impuestoDeuda = 0;
    float  impuestoDiario = 0;

    float impuestoDiarioMultiplicador;

    [System.Serializable]
    public class CruzaList
    {
        public Cruza[] cruza;
    }

    public CruzaList myCruzaList = new CruzaList();

    // Use this for initialization
    void Start () {

        myCruzaList = JsonUtility.FromJson<CruzaList>(Cruzas.text);
        print(myCruzaList);

        if (PlayerPrefs.GetInt("Jaula1") != 89) { cage1Money = myCruzaList.cruza[PlayerPrefs.GetInt("Jaula1")].dinero; }
        if (PlayerPrefs.GetInt("Jaula2") != 89) { cage2Money = myCruzaList.cruza[PlayerPrefs.GetInt("Jaula2")].dinero; }
        if (PlayerPrefs.GetInt("Jaula3") != 89) { cage3Money = myCruzaList.cruza[PlayerPrefs.GetInt("Jaula3")].dinero; }
        if (PlayerPrefs.GetInt("Jaula4") != 89) { cage4Money = myCruzaList.cruza[PlayerPrefs.GetInt("Jaula4")].dinero; }
        if (PlayerPrefs.GetInt("Jaula5") != 89) { cage5Money = myCruzaList.cruza[PlayerPrefs.GetInt("Jaula5")].dinero; }
        print(PlayerPrefs.GetInt("Jaula1"));


    }

    private void Update()
    {

    }


    public void AddMoney()
    {

        popularityMultipliyer = popularity / 100 + 1;
        if (GameObject.FindGameObjectWithTag("NewTextoMonedas")) { 
        newMoneyText = GameObject.FindGameObjectWithTag("NewTextoMonedas").GetComponent<Text>();
        }

        if (PlayerPrefs.GetInt("Moneditas") < 0)
        {
            impuestoDeuda = 5;
        }

        impuestoDiarioMultiplicador = 0.2f * PlayerPrefs.GetInt("Dias");
        if (impuestoDiarioMultiplicador < 1)
        {
            impuestoDiarioMultiplicador = 1;
        }

        print(impuestoDiarioMultiplicador);
        impuestoDiario = ((PlayerPrefs.GetInt("JaulasOcupadas") * 1000) + 500) * impuestoDiarioMultiplicador;
        print(impuestoDiario);

        PlayerPrefs.SetInt("Popularidad", PlayerPrefs.GetInt("Popularidad") - impuestoDeuda);


        newMoney = ((cage1Money / 4 + cage2Money / 4 + cage3Money / 4 + cage4Money/4 + cage5Money/4) * popularityMultipliyer) - (int)impuestoDiario;

        if (newMoney < 0)
        {
            newMoneyText.color = Color.red;
        }
        else
        {
            newMoneyText.color = new Color(0.1607843f, 0.3137255f, 0.1372549f);
        }

        newMoneyInt = (int)newMoney;
        newMoneyText.text = newMoneyInt.ToString();
        Monedas = PlayerPrefs.GetInt("Moneditas");
        Monedas = Monedas + (int)newMoneyInt;
        PlayerPrefs.SetInt("Moneditas", (int)Monedas);
        print(Monedas);
    }
}
