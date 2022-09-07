using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class database : MonoBehaviour
{
public string Name;
public string DangerousLevel.Range(1,5);
public string Popularity.Range(1,5);



}
//el script de arriba va a llamar al siguiente script con la info de cada animal//
 public static BaseAnimals Carpincho = new BaseAnimals(
name: "Carpincho",
DangerousLevel (1),
Popularity (5),                                                   
 );

 public static BaseAnimals Cocodrilo = new BaseAnimals(
name: "Cocodrilo",
DangerousLevel (4),
Popularity (4),                                                   
 );

 public static BaseAnimals Cocodrilo = new BaseAnimals(
name: "Murcielago",
DangerousLevel (2),
Popularity (3),                                                   
 );

//fusionscript?//
class InventarioUsuario
{
        public BaseAnimals slot1;
        public BaseAnimals slot2;
        public BaseAnimals slot3;

        public bool fused;
        private Rigidbody2D rigidBody;
        private GameObject fusion;
        private GameObject failedfusion;


         private void Start()
    {
        rigidBody = GetComponent<Rigidbody2D>();
        fusion = gameObject.GetComponent<TERMINADOS>();
        failedfusion = gameObject.GetComponent<TERMINADOS>();
    }
        public InventarioUsuario(BaseAnimals s1, BaseAnimals s2, BaseAnimals s3)
        {
            if((s1 == database.Carpincho)||(s2 == database.Cocodrilo)||(s3 == database.Murcielago))
            {
                fused = true;
                fusion;//= imagen de resultado//
            }
            else((s1 == database.Cocodrilo)||(s2 == database.Carpincho)||(s3 == database.Murcielago))
            {
                fused = true;
                fusion;//= imagen de resultado//
            }
            else((s1 == database.Murcielago)||(s2 == database.Carpincho)||(s3 == database.Cocodrilo))
            {
                fused = true;
                fusion;//= imagen de resultado//
            }
            else((s1 == database.Carpincho)||(s2 == database.Cocodrilo)||(s3 == database.Murcielago))
            {
                fused = false;
                failedfusion;//= imagen de resultado//MASAAMORFA
            }
            else((s1 == database.Cocodrilo)||(s2 == database.Carpincho)||(s3 == database.Murcielago))
            {
                fused = false;
                failedfusion;//= imagen de resultado//MASAAMORFA
            }
            else((s1 == database.Murcielago)||(s2 == database.Carpincho)||(s3 == database.Cocodrilo))
            {
                fused = true;
                fusion;//= imagen de resultado//
            }
            else((s1 == database.Carpincho)||(s2 == database.Murcielago)||(s3 == database.Cocodrilo))
            {
                fused = true;
                fusion;//= imagen de resultado//
            }
        }

        public InventarioUsuario(BaseAnimals new) : this(fusion)
        {

        }
    }
