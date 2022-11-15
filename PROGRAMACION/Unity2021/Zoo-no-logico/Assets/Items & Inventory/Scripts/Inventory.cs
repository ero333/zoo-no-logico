using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class Inventory : MonoBehaviour
{
    [FormerlySerializedAs("items")] //ESTO ES PARA QUE UNITY NO BORRE LA LISTA ORIGINAL LLAMADA "ITEMS", PORQUE AL CAMBIARLE DE NOMBRE A "STARINGITEMS" VA A PENSAR QUE ES UNA DISTINTA
    [SerializeField] List<Item> startingItems;
    [SerializeField] Transform itemsParent;
    [SerializeField] ItemSlot[] itemSlots;

    //public event Action<ItemSlot> OnRightClickEvent;
    public event Action<ItemSlot> OnBeginDragEvent;
    public event Action<ItemSlot> OnEndDragEvent;
    public event Action<ItemSlot> OnDragEvent;
    public event Action<ItemSlot> OnDropEvent;

    private void Start()  //HACEMOS UN AWAKE PARA PODER MENTER LISTENERS EN EL EVENTO DEL SLOT, O SEA, EL CLICK
    {
        for (int i = 0; i < itemSlots.Length; i++)
        {
           // itemSlots[i].OnRightClickEvent += OnRightClickEvent;
            itemSlots[i].OnBeginDragEvent += OnBeginDragEvent;
            itemSlots[i].OnEndDragEvent += OnEndDragEvent;
            itemSlots[i].OnDragEvent += OnDragEvent;
            itemSlots[i].OnDropEvent += OnDropEvent;

        }
        SetStartingItems();

        //if(PlayerPrefs.GetInt("CantidadCarpincho")<=0){
        //    itemSlots[0].Item = null;
        //}
        //        if(PlayerPrefs.GetInt("CantidadArana") <= 0){
        //    itemSlots[1].Item = null;
        //}
        //        if(PlayerPrefs.GetInt("CantidadCocodrilo") <= 0){
        //    itemSlots[2].Item = null;
        //}
        //        if(PlayerPrefs.GetInt("CantidadZorro") <= 0){
        //    itemSlots[3].Item = null;
        //}
        //        if(PlayerPrefs.GetInt("CantidadMurcielago")<=0){
        //    itemSlots[4].Item = null;
        //}
        //        if(PlayerPrefs.GetInt("CantidadSerpiente")<=0){
        //    itemSlots[5].Item = null;
        //}
        //        if(PlayerPrefs.GetInt("CantidadAve")<=0){
        //    itemSlots[6].Item = null;
        //}

    }





    private void OnValidate()
    {
        if (itemsParent != null)
            itemSlots = itemsParent.GetComponentsInChildren<ItemSlot>();

        SetStartingItems();
    }

    private void SetStartingItems() // ESTE VOID VA A SER LLAMADO CADA VEZ QUE LE HAGAMOS UN CAMBIO AL INVENTARIO

    {
        
        int i = 0;
        for (; i < startingItems.Count && i < itemSlots.Length; i++) // POR CADA ITEM QUE TENGAMOS, LE VAMOS A ASIGNAR UN SLOT POR CADA SLOT QUE NO ESTÉ YA OCUPADO POR OTRO ITEM
        {
            itemSlots[i].Item = startingItems[i];
        }

        for (; i < itemSlots.Length; i++)
        {
            itemSlots[i].Item = null;
        }
    }

    //CON ESTE METODO VAMOS A VER SI EL INVENTARIO ESTA LLENO ANTES DE AGREGAR ALGO

    public bool AddItem(Item item)
    {
        for (int i = 0; i < itemSlots.Length; i++)
        {
            if (itemSlots[i].Item == null)
            {
                itemSlots[i].Item = item;
                return true;
            }
        }
        return false;
    }
    public bool RemoveItem(Item item) //Si eliminamos un item de la lista, refresca la interfaz digamos para que ya no aparezca mas, sino borramos nada no pasa nada lol.
    {
        for (int i = 0; i < itemSlots.Length; i++)
        {
            if (itemSlots[i].Item == item)
            {
                itemSlots[i].Item = null;
                return true;
            }
        }
        return false;
    }

    public bool IsFull() // ACA SE DA CUENTA QUE ESTÁ LLENO SI LA CANTIDAD DE ITEMS ES MAYOR E IGUAL A LA CANTIDAD DE SLOTS PARA LOS ITEMS
    {
        for (int i = 0; i < itemSlots.Length; i++)
        {
            if (itemSlots[i].Item == null)
            {
                return false;
            }
        }
        return true;
    }

}

internal class formerlySerializedAsAttribute : Attribute
{
}