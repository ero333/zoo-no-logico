using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu, System.Serializable]
public class Mati_CruzasAnimales : ScriptableObject
{
    [Header("Sprite")]
    public Sprite img;

    [Header("Base")]
    public string nombre;
    public int id;
    public float porcentaje;
    public float peligrosidad;
    public int precio;
    public int popularidad;

    [Header("Descripcion y datos")]
    [TextArea] public string descripcion;
    [TextArea] public string dato1;
    [TextArea] public string dato2;
    [TextArea] public string dato3;
}
