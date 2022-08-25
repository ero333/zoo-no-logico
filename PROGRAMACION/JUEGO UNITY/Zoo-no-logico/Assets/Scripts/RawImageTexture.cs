using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RawImageTexture : MonoBehaviour
{
    public Image original;
    public Sprite newSprite;

    void Start()
    {
    }

    public void NewImage()
    {
        Debug.Log('a');
        original.sprite = newSprite;
    }
}
