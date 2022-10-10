using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class JaulasManager : MonoBehaviour
{

    public int[] JaulasActivas = new int[20] { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };

    public GameObject[] JaulasArray;

    // Use this for initialization
    void Start()
    {

        GetJaulas();

        int jaulas_ocupadas = PlayerPrefs.GetInt("JaulasOcupadas");

        print(jaulas_ocupadas);

        for (int i = 0; i < JaulasArray.Length; i++)
        {
            JaulasArray[i].SetActive(false);
        }

        for (int i = 0; i < jaulas_ocupadas; i++)
        {
            JaulasArray[i].SetActive(true);

            Sprite cruza_test_img = Resources.Load<Sprite>(PlayerPrefs.GetString("Jaula"+i));

            Image Jaula_image = JaulasArray[i].GetComponent<Image>();

            Jaula_image.sprite = cruza_test_img;
        }
    }

    // Update is called once per frame
    void Update()
    {
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

    public void OcuparJaula ()
    {
        int selectedJaula = -1;

        for (int i = 0; i < JaulasActivas.Length; i++)
        {
            if ((JaulasActivas[i] == 0) && selectedJaula == -1)
            {
                JaulasActivas[i] = 1;
                selectedJaula = i;
                print(i + " here");
            }
        }
        
        JaulasArray[selectedJaula].SetActive(true);

        PlayerPrefs.SetInt("JaulasOcupadas", PlayerPrefs.GetInt("JaulasOcupadas") + 1);
    }

    public void DesocuparJaula (int selectedJaula)
    {
        JaulasArray[selectedJaula].SetActive(false);

        PlayerPrefs.SetInt("JaulasOcupadas", PlayerPrefs.GetInt("JaulasOcupadas") - 1);
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
