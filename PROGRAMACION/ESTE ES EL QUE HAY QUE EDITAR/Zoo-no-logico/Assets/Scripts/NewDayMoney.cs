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

        

        for (int i = 0; i<20; i++){
            if (PlayerPrefs.GetInt("Jaula" + i) != 89) { PlayerPrefs.SetInt("cage"+ i+"Money", myCruzaList.cruza[PlayerPrefs.GetInt("Jaula" + i)].dinero);}
        }


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
            impuestoDeuda = 12;
        }
        else{
            impuestoDeuda = 0;
        }

        impuestoDiarioMultiplicador = 0.2f * PlayerPrefs.GetInt("Dias");
        if (impuestoDiarioMultiplicador < 1)
        {
            impuestoDiarioMultiplicador = 1;
        }

        impuestoDiario = ((PlayerPrefs.GetInt("JaulasOcupadas") * 400) + 500) * impuestoDiarioMultiplicador;

        PlayerPrefs.SetInt("Popularidad", PlayerPrefs.GetInt("Popularidad") - impuestoDeuda);


        newMoney = ((PlayerPrefs.GetInt("cage1Money") / 4 + PlayerPrefs.GetInt("cage2Money") / 4 + PlayerPrefs.GetInt("cage3Money") / 4 + PlayerPrefs.GetInt("cage4Money")/4 + PlayerPrefs.GetInt("cage5Money")/4 + PlayerPrefs.GetInt("cage6Money") / 4 + PlayerPrefs.GetInt("cage7Money") / 4 + PlayerPrefs.GetInt("cage8Money") / 4 + PlayerPrefs.GetInt("cage9Money")/4 + PlayerPrefs.GetInt("cage10Money")/4) * popularityMultipliyer) - (int)impuestoDiario;

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
    }
}
