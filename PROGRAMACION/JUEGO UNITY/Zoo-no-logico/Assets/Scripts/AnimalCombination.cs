using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AnimalCombination : MonoBehaviour {

    [SerializeField] private UI_Inventory uiInventory;

    private Inventory inventory;

    private void Awake()
    {
        
    }

    // Use this for initialization
    void Start () {
        inventory = new Inventory();
        uiInventory.SetInventory(inventory);

        //GameObject.Find("CombinarBtn").GetComponentInChildren<Text>().text = "test";
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
