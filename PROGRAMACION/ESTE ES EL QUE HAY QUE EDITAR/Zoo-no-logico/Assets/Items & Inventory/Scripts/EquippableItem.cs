using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI; // ESTE COMANDO ES PARA QUE ESTE CODIGO PUEDA ACCEDER A LAS IMAGENES DEL PROYECTO

public enum EquipmentType
{
   Animal,
   Comida,
   Jaula,
}

public enum SlotNumber
{
    //SLOTS DE CRUZA
    Slot1,
    Slot2,
    Slot3,
}

public enum SlotNumberInv
{
   Slot1Inv,
    Slot2Inv,
    Slot3Inv,
    Slot4Inv,
    Slot5Inv,
    Slo6Inv,
    Slot7Inv,
}


[CreateAssetMenu]
public class EquippableItem : Item //ESTO SIRVE PARA DECLARAR CUALES SON LOS ITEMS QUE PUEDEN SER LLEVADOS AL MENU DEL JUGADOR Y QUE PUEDEN SER EQUIPABLES
                                     //ESE MENU DE EQUIPABLES EN REALIDAD SERÍA EL MENU DE CRUZA, Y LOS UNICOS ITEMS QUE PODRIAN SER LLEVADOS ALLI SERIAN LOS ANIMALES
                                     //MUCHOS INT DE ACA SON DEL EJEMPLO DEL TUTORIAL, YO DEJO EL DE PELIGROSIDAD PORQUE LO USARIAMOS PARA ASIGNARLE UN NUMERO FIJO Y DESPUES CALCULAR
                                     //UN PORCENTAJE AL MOMENTO DE CRUZAR
{

    public int Peligrosidad;
    public int Popularidad;
    public int Dinero;
    [Space]
    public EquipmentType EquipmentType;
    public SlotNumberInv SlotNumberInv;



    public void unequip(Character c)
    {

    }

    public void equip(Character c)
    {

       
    }
}
