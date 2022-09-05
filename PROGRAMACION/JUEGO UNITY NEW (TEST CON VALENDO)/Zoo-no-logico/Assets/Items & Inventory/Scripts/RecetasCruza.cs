using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[Serializable]
public struct ItemAmount
{
    public Item Item;
    [Range(1, 999)]
    public int Amount;
}



[CreateAssetMenu]
public class RecetasCruza : ScriptableObject
{
    public List<ItemAmount> Materiales;
    public List<ItemAmount> Resultados;

    public bool CanCraft(InterfazCombinacion interfazCombinacion)
    {
        foreach (ItemAmount itemAmount in Materiales) //VAMOS X CADA AMOUNT DE LOS ITEMS
        {
            if (interfazCombinacion.ItemCount(itemAmount.Item) < itemAmount.Amount) //SI LA INTERFAZ DE COMBINACION CONTIENE CANTIDAD SUFICIENTE DEL ANIMAL QUE NECESITAMOS PARA LA RECETA DE COMBINACION, VAMOS A PODER COMBINAR
            {
                return false;
            }
        }
        return true;
    }

    public void Craft(InterfazCombinacion interfazCombinacion)
    {
        if(CanCraft(interfazCombinacion))
        {
            foreach (ItemAmount itemAmount in Materiales)
            {
                for (int i = 0; i < itemAmount.Amount; i++)
                {
                    interfazCombinacion.RemoveItem(itemAmount.Item);
                }
            }

            foreach (ItemAmount itemAmount in Resultados)
            {
                for (int i = 0; i < itemAmount.Amount; i++)
                {
                    interfazCombinacion.AddItem(itemAmount.Item);
                }
            }
        }
    }
}
