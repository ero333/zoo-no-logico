using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

// ESTE SCRIP ES LO QUE UNE A LOS DOS PANELES, EL DE ITEMS NORMALES Y EL DE ITEMS QUE SE PUEDEN "EQUIPAR" QUE EN NUESTRO JUEGO SERÍA EL MENÚ DE CRUZA
public class Character : MonoBehaviour
{

    [SerializeField] Inventory inventory;
    [SerializeField] InterfazCruza equipmentPanel;
    [SerializeField] Image draggableItem;

    private ItemSlot draggedSlot;


    public Texture2D grabArrow;
    public Texture2D arrow;

    public GameObject Cosoprueba;

    private void Awake() // AGREAMOS LISTENER EN EL EVENTO DE INVENTORY, O SEA, EL CLICK. Y VA A LLAMAR AL EVENTO DE EQUIPAR
    {
        Cursor.SetCursor(arrow, Vector2.zero, CursorMode.ForceSoftware);

        // setup events 
        //click derecho
        //inventory.OnRightClickEvent += Equip;
       // equipmentPanel.OnRightClickEvent += Unequip;
        //empieza drageo
        inventory.OnBeginDragEvent += BeginDrag;
        equipmentPanel.OnBeginDragEvent += BeginDrag;
        //finalización del drageo
        inventory.OnEndDragEvent += EndDrag;
        equipmentPanel.OnEndDragEvent += EndDrag;
        //drageo en si )?
        inventory.OnDragEvent += Drag;
        equipmentPanel.OnDragEvent += Drag;
        // dropeo
        inventory.OnDropEvent += Drop;
        equipmentPanel.OnDropEvent += Drop;
    }

    // ACA DECLARAMOS LOS SETUPS DE ARRIBA

    private void Equip(ItemSlot itemSlot)
    {

        EquippableItem equippableItem = itemSlot.Item as EquippableItem;
        if (equippableItem != null)
        {
            Equip(equippableItem);
        }
    }

    private void Unequip(ItemSlot itemSlot)
    {
        EquippableItem equippableItem = itemSlot.Item as EquippableItem;
        if (equippableItem != null)
        {
            Unequip(equippableItem);
        }
    }

    private void BeginDrag (ItemSlot itemSlot)
    {
        //grabArrow = draggableItem;

        if (itemSlot.Item != null)
        {
            //Esto funciona
            draggedSlot = itemSlot;
            draggableItem.sprite = itemSlot.Item.Icon;
            //itemSlot.Item.Icon = Input.mousePosition;
            draggableItem.transform.position = Input.mousePosition;
            draggableItem.enabled = true;
            if (!itemSlot.ToString().Contains("Inventario"))
            {
                PlayerPrefs.SetString(itemSlot.ToString(), "");
            }
            //Pruebas
            //Vector2 mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition) - transform.position;
            //transform.Translate(mousePosition);
            Cursor.SetCursor(grabArrow, Vector2.zero, CursorMode.ForceSoftware);
        }
    }

    private void EndDrag(ItemSlot itemSlot)
    {
        draggedSlot = null;
        draggableItem.enabled = false;
        Cursor.SetCursor(arrow, Vector2.zero, CursorMode.ForceSoftware);
    }


    private void Drag(ItemSlot itemSlot)
    {

       

        if (!draggableItem.enabled)
        {

            draggableItem.transform.position = Input.mousePosition;
       
         
             

        }
        
    }

    private void Drop(ItemSlot dropitemSlot)
    {
        if (dropitemSlot && draggedSlot)
        {
            if (dropitemSlot.CanReceiveItem(draggedSlot.Item) && draggedSlot.CanReceiveItem(dropitemSlot.Item))
            {
                EquippableItem dragItem = draggedSlot.Item as EquippableItem;
                EquippableItem dropItem = dropitemSlot.Item as EquippableItem;

                if (draggedSlot is SlotDeCruza)
                {

                    if (draggedSlot.Item.name == "Carpincho")
                    {
                        Cosoprueba.SendMessage("SumarCantidadCarpincho");
                    }

                    if (draggedSlot.Item.name == "Araña")
                    {
                        Cosoprueba.SendMessage("SumarCantidadArana");
                    }

                    if (draggedSlot.Item.name == "Cocodrilo")
                    {
                        Cosoprueba.SendMessage("SumarCantidadCocodrilo");
                    }

                    if (draggedSlot.Item.name == "Zorro")
                    {
                        Cosoprueba.SendMessage("SumarCantidadZorro");
                    }

                    if (draggedSlot.Item.name == "Murcielago")
                    {
                        Cosoprueba.SendMessage("SumarCantidadMurcielago");
                    }

                    if (draggedSlot.Item.name == "Serpiente")
                    {
                        Cosoprueba.SendMessage("SumarCantidadSerpiente");
                    }

                    if (draggedSlot.Item.name == "Ave Secretaria")
                    {
                        Cosoprueba.SendMessage("SumarCantidadAve");
                    }

                    if (dragItem != null) dragItem.unequip(this);
                    if (dropItem != null) dropItem.equip(this);


                }

                if (dropitemSlot is SlotDeCruza)
                {
                    PlayerPrefs.SetString(dropitemSlot.tag.ToString(), draggedSlot.Item.name.ToString());
                    //print(dropitemSlot.tag.ToString());
                    //print(draggedSlot.Item.name.ToString());

                    if (dragItem != null) dragItem.equip(this);
                    if (dropItem != null) dropItem.unequip(this);

                    if (draggedSlot.Item.name == "Carpincho")
                    {
                        Cosoprueba.SendMessage("RestarCantidadCarpincho");
                    }

                    if (draggedSlot.Item.name == "Araña")
                    {
                        Cosoprueba.SendMessage("RestarCantidadArana");
                    }

                    if (draggedSlot.Item.name == "Cocodrilo")
                    {
                        Cosoprueba.SendMessage("RestarCantidadCocodrilo");
                    }

                    if (draggedSlot.Item.name == "Zorro")
                    {
                        Cosoprueba.SendMessage("RestarCantidadZorro");
                    }

                    if (draggedSlot.Item.name == "Murcielago")
                    {
                        Cosoprueba.SendMessage("RestarCantidadMurcielago");
                    }

                    if (draggedSlot.Item.name == "Serpiente")
                    {
                        Cosoprueba.SendMessage("RestarCantidadSerpiente");
                    }

                    if (draggedSlot.Item.name == "Ave Secretaria")
                    {
                        Cosoprueba.SendMessage("RestarCantidadAve");
                    }

                }

                Item draggedItem = draggedSlot.Item;
                draggedSlot.Item = dropitemSlot.Item;
                dropitemSlot.Item = draggedItem;
            }
        }
    }



    //ACA VAMOS A CONTROLAR QUE PASA CUANDO EQUIPAMOS Y DESEQUIPAMOS ALGO DEL "MENU DE CRUZA"

    public void Equip(EquippableItem item) //CUANDO EQUIPAMOS NECESITAMOS REMOVER EL ITEM DEL INVENTARIO Y LLEVARLO AL MENU DE CRUZA
    {
        if (inventory.RemoveItem(item))
        {
            EquippableItem previousItem;
            if (equipmentPanel.AddItem(item, out previousItem))
            {
                if (previousItem != null) //SI HAY ALGO EN EL SLOT DEL MENU DE CRUZA, LO DEVUELVE AL INVENTARIO
                {
                    inventory.AddItem(previousItem);
                }
            }
            else // SI POR ALGUNA RAZON NO PODEMOS EQUIPAR EL ITEM EN EL MENU DE CRUZA, LO VA A DEVOLVER AL INVENTORY
            {
                inventory.AddItem(item);
            }
        }
    }

    public void Unequip(EquippableItem item) //CUANDO DESEQUIPAMOS UN ITEM TENEMOS QUE ASEGURARNOS DE QUE EL INVENTARIO NO ESTÉ LLENO PRIMERO
    {
        if (!inventory.IsFull() && equipmentPanel.RemoveItem(item)) //DESPUES QUITAMOS EL ITEM DEL MENU DE CRUZA Y LO MANDAMOS AL INVENTARIO
        {
            inventory.AddItem(item);

            if (item.name == "Carpincho")
            {
                Cosoprueba.SendMessage("SumarCantidadCarpincho");
            }

            if (item.name == "Araña")
            {
                Cosoprueba.SendMessage("SumarCantidadArana");
            }

            if (item.name == "Cocodrilo")
            {
                Cosoprueba.SendMessage("SumarCantidadCocodrilo");
            }

            if (item.name == "Zorro")
            {
                Cosoprueba.SendMessage("SumarCantidadZorro");
            }

            if (item.name == "Murcielago")
            {
                Cosoprueba.SendMessage("SumarCantidadMurcielago");
            }

            if (item.name == "Serpiente")
            {
                Cosoprueba.SendMessage("SumarCantidadSerpiente");
            }

            if (item.name == "Ave Secretaria")
            {
                Cosoprueba.SendMessage("SumarCantidadAve");
            }
        }
    }

}