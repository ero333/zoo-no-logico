using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item
{

    public enum ItemType
    {
        Animal,
        Cage,
        Food,
    }

    public ItemType itemType;
    public int amount;
}
