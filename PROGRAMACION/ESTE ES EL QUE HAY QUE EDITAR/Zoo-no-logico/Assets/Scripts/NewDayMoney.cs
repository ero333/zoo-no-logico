using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class NewDayMoney : MonoBehaviour {

    public Text newMoneyText;

    public int cage1Money = 70;
    public int cage2Money = 100;
    public int cage3Money = 150;
    public float popularity = 75;
    public float cageDivisor = 4;
    private float popularityMultipliyer;
    private float newMoney;
    private int newMoneyInt;
    float Monedas;


    // Use this for initialization
    void Start () {

    }
	

    public void AddMoney()
    {
        popularityMultipliyer = popularity / 100 + 1;
        newMoneyText = GameObject.FindGameObjectWithTag("NewTextoMonedas").GetComponent<Text>();
        newMoney = (cage1Money / 4 + cage2Money / 4 + cage3Money / 4) * popularityMultipliyer;
        newMoneyInt = (int)newMoney;
        newMoneyText.text = newMoneyInt.ToString();
        Monedas = PlayerPrefs.GetInt("Moneditas");
        Monedas = Monedas + (int)newMoneyInt;
        PlayerPrefs.SetInt("Moneditas", (int)Monedas);
        print(Monedas);
    }
}
