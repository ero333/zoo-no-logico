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

    public Sprite GetSprite()
    {
        switch (itemType)
        {
            default:
            case ItemType.Animal: return ItemAssets.Instance.animalSprite;
            case ItemType.Cage: return ItemAssets.Instance.cageSprite;
            case ItemType.Food: return ItemAssets.Instance.foodSprite;   
        }
    }

    public bool IsStackable()
    {
        switch (itemType)
        {
            default:
            case ItemType.Animal:
                return false;
            case ItemType.Cage:
            case ItemType.Food:
                return true;
        }
    }
}
