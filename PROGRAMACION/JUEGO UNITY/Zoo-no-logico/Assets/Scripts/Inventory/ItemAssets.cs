using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemAssets : MonoBehaviour
{

    public static ItemAssets Instance { get; private set; }

    void Start()
    {
        Instance = this;
    }

    //public Sprite carpinchoSprite;
    //public Sprite cocodriloSprite;
    //public Sprite zorroSprite;
    //public Sprite murcielagoSprite;

    public Sprite animalSprite;
    public Sprite foodSprite;
    public Sprite cageSprite;
}
