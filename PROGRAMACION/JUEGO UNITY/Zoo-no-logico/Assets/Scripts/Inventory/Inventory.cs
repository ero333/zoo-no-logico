using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Inventory {

    private List<Item> itemList;

    public Inventory()
    {
        itemList = new List<Item>();

        Debug.Log("Inventory");

        AddItem(new Item { itemType = Item.ItemType.Animal, amount = 1 });
        AddItem(new Item { itemType = Item.ItemType.Food, amount = 1 });
        AddItem(new Item { itemType = Item.ItemType.Cage, amount = 1 });
        AddItem(new Item { itemType = Item.ItemType.Animal, amount = 1 });
        AddItem(new Item { itemType = Item.ItemType.Food, amount = 1 });

        Debug.Log(itemList.Count);
    }

    public void AddItem(Item item)
    {
        if (item.IsStackable())
        {
            bool itemAlreadyInInventory = false;
            foreach (Item inventoryItem in itemList)
            {
                if (inventoryItem.itemType == item.itemType)
                {
                    inventoryItem.amount += item.amount;
                    itemAlreadyInInventory = true;
                }
            }
            if (!itemAlreadyInInventory)
            {
                itemList.Add(item);
            }
        } else
        {
            itemList.Add(item);
        }
        
    }

    public List<Item> GetItemList()
    {
        return itemList;
    }
}
