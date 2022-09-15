using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI; // ESTE COMANDO ES PARA QUE ESTE CODIGO PUEDA ACCEDER A LAS IMAGENES DEL PROYECTO
using UnityEngine.EventSystems; //CON ESTO VAMOS A PODER EMPEZAR A HACER CLICK Y SELECCIONAR EL ITEM

public class ItemSlot : MonoBehaviour, IPointerClickHandler, IBeginDragHandler, IEndDragHandler, IDragHandler, IDropHandler
{
  
    
    

    public event Action<ItemSlot> OnRightClickEvent; //ESTO VA A TRIGGEAR EL ITEMSLOT SEA PRESIONADO CON CLICK DERECHO, O SEA EN EL VOID ONPIONTERCLICK
    public event Action<ItemSlot> OnBeginDragEvent;
    public event Action<ItemSlot> OnEndDragEvent;
    public event Action<ItemSlot> OnDragEvent;
    public event Action<ItemSlot> OnDropEvent;


    // estamos declarando variables de color asi podemos modificar el item slot para que se "muestre" y para que "desaparezca" usando la transparencia
   

  //[SerializeField] Image image;
  public Item _item 
   // public T ChangeAlpha<T>(this T _item, float newAlpha)
   //      where T : Graphic
   //  {
   //      var color = _item.color;
   //      color.a = newAlpha;
   //      _item.color = color;
   //      return _item;
//
   //         if (_item == null)
   //         {
   //             Image.ChangeAlpha(0.5f);
   //             
   //         } else
    //        {
    //            Image.ChangeAlpha(1f);
                
    //        }
        
         
  //   }
 
     
        
     

    public void OnPointerClick(PointerEventData eventData)
    {
        if (eventData != null && eventData.button == PointerEventData.InputButton.Right)
        {
            if (OnRightClickEvent != null)
                OnRightClickEvent(this);
        }
    }
    
    protected virtual void OnValidate() // OnValidate es como un start o un update, se llama en un momento específico. Sirve para ahorrarse el trabajo de modificar item por item.
                                        // Este es solo llamado en el editor, por eso el private. Y triggea cuando se carga el script o cuando modificamos algun valor en el inspector.
    {
        if (image == null) // Si no hay imagen, va a ir a buscar la imagen correspondiente al item.
            image = GetComponent<Image>();
    }

    public virtual bool CanReceiveItem(Item item)
    {
        return true;
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        if (OnBeginDragEvent != null)
            OnBeginDragEvent(this);
           
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        if (OnEndDragEvent != null)
            OnEndDragEvent(this);
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (OnDragEvent != null)
            OnDragEvent(this);
    }

    public void OnDrop(PointerEventData eventData)
    {
        if (OnDropEvent != null)
            OnDropEvent(this);
           
    }
}

