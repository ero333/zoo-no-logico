using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CuposJaulas : MonoBehaviour
{


    //GameObject Jaula1;
    public int numJaulasOcupadas;
    public Text textoJaulas;

    // Use this for initialization
    void Start()
    {
        textoJaulas = GameObject.FindGameObjectWithTag("TextoJaulas").GetComponent<Text>();
        numJaulasOcupadas = PlayerPrefs.GetInt("Jaulitas");

    }

    // Update is called once per frame
    void Update()
    {
        textoJaulas.text = numJaulasOcupadas.ToString();

        numJaulasOcupadas = PlayerPrefs.GetInt("Jaulitas");
    }

    public void OcuparJaulas()
    {
        numJaulasOcupadas++;
        PlayerPrefs.SetInt("Jaulitas", numJaulasOcupadas);

        if (numJaulasOcupadas > 20)
        {
            numJaulasOcupadas = 20;
            textoJaulas.text = numJaulasOcupadas.ToString();
            PlayerPrefs.SetInt("Jaulitas", numJaulasOcupadas);
        }

    }

    public void DesocuparJaulas()
    {
        numJaulasOcupadas--;
        PlayerPrefs.SetInt("Jaulitas", numJaulasOcupadas);

        if (numJaulasOcupadas <= 0)
        {
            numJaulasOcupadas = 0;
            textoJaulas.text = numJaulasOcupadas.ToString();
            PlayerPrefs.SetInt("Jaulitas", numJaulasOcupadas);
        }
    }

}
