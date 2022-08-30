using System.Collections;
using System.Collections.Generic;
using UnityEngine;



//HECHO POR VALENDO, SE SUPONE VA A ESTAR TODO EL CODING DE EL "CRAFTEO" DE LOS ANIMALES PARA LOGRAR LAS COMBINACIONES

// VA A CONSISTIR DE UNA LISTA DE INPUT ITEMS (SUPONGO CONECTADOS A LOS DEL INVENTARIO), MATERIALES DE LAS "RECETAS" Y UNA LISTA DE LOS OUTPUT ITEMS QUE VAN A SER LAS COMBINACIONES HECHAS



[PreferBinarySerialization] //Si no ponemos esto supuestamente no se va a mostrar en el editor (?
public struct ItemAmount   // esto es cuanto de porcentaje toma del item para el crafteo
{
    public Item Item;
    public int Amount;
}


[CreateAssetMenu]
public class SistemaCrafteo : ScriptableObject
{

    public List<Item> Materials;
    public List<Item> Results;

}
