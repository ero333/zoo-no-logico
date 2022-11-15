using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class Peligrosidad : MonoBehaviour {

    public TextAsset Cruzas;
    private int peligrosidad;
    public int index;
    public Image foto;

    public Image estrella1;
    public Image estrella2;
    public Image estrella3;
    private string animales;
    [System.Serializable]
    public class Cruza
    {
        public string id;
        public string nombre;
        public string descripcion;
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
    // Use this for initialization
    void Start () {
        myCruzaList = JsonUtility.FromJson<CruzaList>(Cruzas.text);

        int forCounter = 0;
        bool matched = false;
        for (int i = 0; i < myCruzaList.cruza.Length; i++)
        {

            
            if (myCruzaList.cruza[i].nombre.ToUpper().Replace(" ", "") == animales.ToUpper())
            {
                index = forCounter;
                matched = true;
            }
            forCounter = forCounter + 1;
        }

        PlayerPrefs.SetInt("indexCurrentCruza", index);



        if (!matched)
        {
            SceneManager.LoadScene("menu-cruza-fallida");
        }


        //descripcion.text = myCruzaList.cruza[index].descripcion;
        //nombre.text = myCruzaList.cruza[index].nombre;

        if (myCruzaList.cruza[index].peligrosidad == 1)
        {
            estrella1.color = Color.white;
            estrella2.color = Color.grey;
            estrella3.color = Color.grey;
        }
        if (myCruzaList.cruza[index].peligrosidad == 2)
        {
            estrella1.color = Color.white;
            estrella2.color = Color.white;
            estrella3.color = Color.grey;
        }
        if (myCruzaList.cruza[index].peligrosidad == 3)
        {
            estrella1.color = Color.white;
            estrella2.color = Color.white;
            estrella3.color = Color.white;
        }


    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
