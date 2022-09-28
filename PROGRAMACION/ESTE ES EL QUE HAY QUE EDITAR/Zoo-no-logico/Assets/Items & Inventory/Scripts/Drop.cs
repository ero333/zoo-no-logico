using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;


public class Drop : MonoBehaviour, IDropHandler
{

public static bool PointerIsOnSlot = false;

    
public void OnDrop(PointerEventData eventData)
{
    if(eventData.pointerDrag !=null)
    {eventData.pointerDrag.GetComponent<RectTransform>().anchoredPosition =
    GetComponent<RectTransform>().anchoredPosition;
    }
    

}

public void PointerOnSlot()

    {
       PointerIsOnSlot = true;
	}

public void PointerOutSlot()

    {
       PointerIsOnSlot = false;
	}


    
} 
