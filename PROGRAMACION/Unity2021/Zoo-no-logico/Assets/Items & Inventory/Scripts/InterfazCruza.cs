using System;
using UnityEngine;

public class InterfazCruza : MonoBehaviour {

    [SerializeField] Transform equipmentSlotsParent;
    [SerializeField] SlotDeCruza[] equipmentSlots;

   // public event Action<ItemSlot> OnRightClickEvent;
    public event Action<ItemSlot> OnBeginDragEvent;
    public event Action<ItemSlot> OnEndDragEvent;
    public event Action<ItemSlot> OnDragEvent;
    public event Action<ItemSlot> OnDropEvent;


    private void Start()
    {
        for (int i = 0; i < equipmentSlots.Length; i++)
        {
           // equipmentSlots[i].OnRightClickEvent += OnRightClickEvent;
            equipmentSlots[i].OnBeginDragEvent += OnBeginDragEvent;
            equipmentSlots[i].OnEndDragEvent += OnEndDragEvent;
            equipmentSlots[i].OnDragEvent += OnDragEvent;
            equipmentSlots[i].OnDropEvent += OnDropEvent;
        }
    }

    private void OnValidate()
    {
        equipmentSlots = equipmentSlotsParent.GetComponentsInChildren<SlotDeCruza>();
     
    }

    public bool AddItem(EquippableItem item, out EquippableItem previousItem ) //AGREGAR UN ITEM AL SLOT, PERO, LE AGREGAMOS UN PARAMETRO POR SI EL SLOT YA TIENE UN ITEM DENTRO
                                                                               // AI YA TIENE UN ITEM DENTRO, A ESE ITEM SE LE ASIGNA OTRO LUGAR Y SE LO HACE DESAPARECER DEL LUGAR QUE OCUPA
    {
        for (int i = 0; i < equipmentSlots.Length; i++)
        {
            if (equipmentSlots[i].EquipmentType == item.EquipmentType) // SI ENCONTRAMOS EL TIPO DE SLOT QUE PUEDE ALMACENAR NUESTRO ITEM (EJ: SLOT DE MAMIFERO PUEDE ALMACENAR MAMIFERO)
            {
                previousItem = (EquippableItem)equipmentSlots[i].Item;
                equipmentSlots[i].Item = item;
                return true;
            }
        }
        previousItem = null;
        return false;
    }

    public bool RemoveItem(EquippableItem item)
    {
        for (int i = 0; i < equipmentSlots.Length; i++)
        {
            if (equipmentSlots[i].Item == item)
            {
                equipmentSlots[i].Item = null;
                return true;
            }
        }
        return false;
    }
}
