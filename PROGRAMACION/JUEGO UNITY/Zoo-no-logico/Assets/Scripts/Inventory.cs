using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Inventory {

    private List<Item> itemList;

    public Inventory()
    {
        itemList = new List<Item>();

        Debug.Log("inventory");

        AddItem(new Item { itemType = Item.ItemType.Animal, amount = 1 });
        AddItem(new Item { itemType = Item.ItemType.Food, amount = 1 });
        AddItem(new Item { itemType = Item.ItemType.Cage, amount = 1 });

        Debug.Log(itemList.Count);
    }

    public void AddItem(Item item)
    {
        itemList.Add(item);
    }

    public List<Item> GetItemList()
    {
        return itemList;
    }
}
