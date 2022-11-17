using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ConfirmacionDesocuparJaula : MonoBehaviour {

    public GameObject confirmacion;

    [SerializeField] GameObject jaulaManager;

    [SerializeField] private GameObject ANALYTICS;

    void Awake()
    {
        confirmacion = GameObject.FindGameObjectWithTag("ConfirmacionDesocupar");
    }

    // Use this for initialization
    void Start () {
        ANALYTICS = GameObject.FindGameObjectWithTag("ANALYTICS");
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    public void CancelarConfirmacion ()
    {
        confirmacion.SetActive(false);
    }

    public void DesocuparJaula ()
    {
        confirmacion.SetActive(false);
        int indexDesocuparJaula = PlayerPrefs.GetInt("IndexDesocuparJaula");
        jaulaManager.SendMessage("DesocuparJaula", indexDesocuparJaula);
        ANALYTICS.SendMessage("borrar_animal");
    }
}
