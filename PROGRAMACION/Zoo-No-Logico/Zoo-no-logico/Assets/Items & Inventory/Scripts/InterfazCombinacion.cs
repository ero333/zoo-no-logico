

//CREA ESTA INTERFAZ PARA QUE EL CRAFTEO PUEDA COMUNICARSE CON LOS ITEMS ESTEN DONDE ESTEN, YA SEA UN INVENTARIO, UNA TIENDA, ETC.

public interface InterfazCombinacion
{
    int ItemCount(Item item);
    bool ContainsItem(Item item);
    bool RemoveItem(Item item);
    bool AddItem(Item item);
    bool IsFull();

}
