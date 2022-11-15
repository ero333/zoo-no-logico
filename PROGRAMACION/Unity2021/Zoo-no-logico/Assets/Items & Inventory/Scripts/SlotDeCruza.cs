public class SlotDeCruza : ItemSlot
{

    public EquipmentType EquipmentType;
    public SlotNumber SlotNumber;

    protected override void OnValidate()
    {
        base.OnValidate();
        gameObject.name = SlotNumber.ToString();
    }


    public override bool CanReceiveItem(Item item)
    {
        if (item == null)
            return true;

        EquippableItem equippableItem = item as EquippableItem;
     
        return equippableItem != null && equippableItem.EquipmentType == EquipmentType;
        
    }
}
