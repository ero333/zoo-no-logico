using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickupItem : MonoBehaviour
{
    [SerializeField] Item item;
    [SerializeField] Inventory inventory;
    [SerializeField] KeyCode itemPickupKeycode = KeyCode.E;


    //ESTO ES PARA CAPTAR SI EL JUGADOR ESTA EN EL RANGO DEL CHEST, NO LO VAMOS A NECESITAR LOL
    private bool IsInRange;

    // EN ESTE VOID SE DECLARA EL INPUT PARA QUE SI EL JUGADOR LO APRIETA, SE LE AGREGA EL ITEM AL INVENTARIO, EN ESTE CASO CON LA LETRA E
    private void Update()
    {
        if(IsInRange && Input.GetKeyDown(itemPickupKeycode))
        {
            inventory.AddItem(item);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        IsInRange = true;
    }

    private void OnTriggerExit(Collider other)
    {
        IsInRange = false;
    }

}
