using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DragAndDropVisual : MonoBehaviour {

    private bool IsDragging;
    public GameObject imageTest;

	public void OnMouseDown()
    {
        IsDragging = true;
    }

    public void OnMouseUp()
    {
        IsDragging = false;
    }

    // Update is called once per frame
    void Update () {
        if (IsDragging)
        {
            //imageTest.transform.position = new Vector3(Input.mousePosition.x, Input.mousePosition.y, imageTest.transform.position.z);
            //Vector2 mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition) - transform.position;
            //transform.Translate(mousePosition);

            Vector3 mousePosition = new Vector2(Camera.main.ScreenToWorldPoint(Input.mousePosition).x, Camera.main.ScreenToWorldPoint(Input.mousePosition).y);
            imageTest.transform.position = mousePosition;
        }
    }
}
