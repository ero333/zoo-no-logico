using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimalCombination : MonoBehaviour {

    [SerializeField] private UI_Inventory uiInventory;

    private Inventory inventory;

    private void Awake()
    {
        inventory = new Inventory();

        uiInventory.SetInventory(inventory);
    }

    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
