using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
[RequireComponent (typeof(CanvasGroup))]

public class Drag : MonoBehaviour , IPointerClickHandler , IBeginDragHandler , IEndDragHandler , IDragHandler
{

RectTransform rectTransform;
Canvas canvas;
CanvasGroup canvasGroup;
Vector2 initialPos;


   

     void Awake ()
     {
        rectTransform = GetComponent<RectTransform>();
	    canvas = GetComponentInParent<Canvas>();
		canvasGroup = GetComponent<CanvasGroup>();
        initialPos = rectTransform.anchoredPosition;
	}

   
     public void OnBeginDrag(PointerEventData eventData)

    {
       canvasGroup.alpha = 0.3f;
       canvasGroup.blocksRaycasts = false;
	}
   
    
public void OnDrag(PointerEventData eventData)
{
    rectTransform.anchoredPosition += eventData.delta / canvas.scaleFactor ;

}
public void OnEndDrag(PointerEventData eventData)
{
	canvasGroup.alpha = 1f;
    canvasGroup.blocksRaycasts = true;
    if(!Drop.PointerIsOnSlot)
    rectTransform.anchoredPosition = initialPos;
}

public void OnPointerClick(PointerEventData eventData)
{
}
    
} 
