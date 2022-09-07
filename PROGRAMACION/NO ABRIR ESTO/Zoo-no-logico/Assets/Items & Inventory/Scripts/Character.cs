using UnityEngine;
using UnityEngine.UI;

// ESTE SCRIP ES LO QUE UNE A LOS DOS PANELES, EL DE ITEMS NORMALES Y EL DE ITEMS QUE SE PUEDEN "EQUIPAR" QUE EN NUESTRO JUEGO SERÍA EL MENÚ DE CRUZA
public class Character : MonoBehaviour
{

    [SerializeField] Inventory inventory;
    [SerializeField] InterfazCruza equipmentPanel;
    [SerializeField] Image draggableItem;

    private ItemSlot draggedSlot;



    private void Awake() // AGREAMOS LISTENER EN EL EVENTO DE INVENTORY, O SEA, EL CLICK. Y VA A LLAMAR AL EVENTO DE EQUIPAR
    {

        // setup events 
        //click derecho
        inventory.OnRightClickEvent += Equip;
        equipmentPanel.OnRightClickEvent += Unequip;
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
        Debug.Log("equip");
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
        

        if (itemSlot.Item != null)
        {
            Debug.Log("begindrag");
            draggedSlot = itemSlot;
            draggableItem.sprite = itemSlot.Item.Icon;
            draggableItem.transform.position = Input.mousePosition;
            draggableItem.enabled = true;
        }
    }

    private void EndDrag(ItemSlot itemSlot)
    {
        draggedSlot = null;
        draggableItem.enabled = false;
    }

    private void Drag(ItemSlot itemSlot)
    {
        
        if (!draggableItem.enabled)
        {
            Debug.Log("drag");
            draggableItem.transform.position = Input.mousePosition;
        }
        
    }

    private void Drop(ItemSlot dropitemSlot)
    {
        if (dropitemSlot.CanReceiveItem(draggedSlot.Item) && draggedSlot.CanReceiveItem(dropitemSlot.Item))
        {
            EquippableItem dragItem = draggedSlot.Item as EquippableItem;
            EquippableItem dropItem = dropitemSlot.Item as EquippableItem;

            if(draggedSlot is SlotDeCruza)
            {
                if (dragItem != null) dragItem.Unequip(this);
                if (dropItem != null) dropItem.Equip(this);
            }

            if (dropitemSlot is SlotDeCruza)
            {
                if (dragItem != null) dragItem.Equip(this);
                if (dropItem != null) dropItem.Unequip(this);
            }

            Item draggedItem = draggedSlot.Item;
            draggedSlot.Item = dropitemSlot.Item;
            dropitemSlot.Item = draggedItem;
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
            }
        }

}