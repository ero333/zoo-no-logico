using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JsonReader : MonoBehaviour {

    public TextAsset Cruzas;

    [System.Serializable]
    public class Cruza
    {
        public string id;
        public string nombre;
        public string descripcion;
        public int porcentaje;
        public int popularidad;
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
        print(myCruzaList.cruza[0].descripcion);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
