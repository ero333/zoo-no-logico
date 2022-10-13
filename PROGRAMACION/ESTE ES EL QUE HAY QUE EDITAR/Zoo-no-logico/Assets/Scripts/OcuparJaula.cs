using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OcuparJaula : MonoBehaviour {

    public int Monedas;
    public TextAsset Cruzas;
    [SerializeField] public GameObject testMonedas;
    [SerializeField] public GameObject testMonedas2;
    public int[] JaulasActivas = new int[] { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };
    [SerializeField] private GameObject cruza;
    public string cruza_num;

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

    // Use this for initialization
    void Start () {
        myCruzaList = JsonUtility.FromJson<CruzaList>(Cruzas.text);

        Monedas = PlayerPrefs.GetInt("Moneditas");

        for (int i = 0; i < JaulasActivas.Length; i++)
        {
            JaulasActivas[i] = PlayerPrefs.GetInt("JaulaActiva" + i, JaulasActivas[i]);
        }

    }
	
	// Update is called once per frame
	void Update () {
		
	}

    public void OcuparJaulas(int costoJaula)
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

        if (Monedas >= costoJaula)
        {
            testMonedas.SetActive(true);
            Monedas -= costoJaula; // Al int con mis monedas le voy a restar el dato que recibe desde el botón
            PlayerPrefs.SetInt("Moneditas", Monedas);

            cruza_num = cruza.GetComponent<Image>().sprite.name;

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

            PlayerPrefs.SetInt("JaulasOcupadas", PlayerPrefs.GetInt("JaulasOcupadas") + 1);
            PlayerPrefs.SetString("Jaula" + selectedJaula, cruza_num);
            PlayerPrefs.SetInt("popularidad", PlayerPrefs.GetInt("popularidad") + myCruzaList.cruza[int.Parse(cruza_num)].popularidad);

        }
        else
        {
            testMonedas2.SetActive(true);
        }
    }
}
