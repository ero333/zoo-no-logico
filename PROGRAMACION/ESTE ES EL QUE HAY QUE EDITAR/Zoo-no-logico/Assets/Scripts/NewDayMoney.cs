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

    [System.Serializable]
    public class CruzaList
    {
        public Cruza[] cruza;
    }

    public CruzaList myCruzaList = new CruzaList();

    // Use this for initialization
    void Start () {

        myCruzaList = JsonUtility.FromJson<CruzaList>(Cruzas.text);

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


        newMoney = (cage1Money / 4 + cage2Money / 4 + cage3Money / 4 + cage4Money/4 + cage5Money/4) * popularityMultipliyer;


        newMoneyInt = (int)newMoney;
        newMoneyText.text = newMoneyInt.ToString();
        Monedas = PlayerPrefs.GetInt("Moneditas");
        Monedas = Monedas + (int)newMoneyInt;
        PlayerPrefs.SetInt("Moneditas", (int)Monedas);
        print(Monedas);
    }
}
