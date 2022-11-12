using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;


public class Comentarios : MonoBehaviour {

    private string[] Comentariosuwu = new string[] { "¡Me saqué una selfie con una ave secretaria!", "Los zorros estaban acurrucados durmiendo una siesta ¡súper tiernos!", "¡La Serpiente se tragó mi brazalete!", "¡La serpiente-cocodrilo-ave secretaria quebró un coco sólo con su pico!¡Fue asombroso!", "¡Serpiente-ave secretaria-murciélago se abalanzó contra el vidrio de su jaula apenas nos vio! Mi gorra roja lo atrajo.", "El murciélago-ave secretaria-zorro es realmente molesto, su cacareo puede volver loco a cualquiera.", "¡La araña-zorro-murciélago no hace nada más que comer!", "La cola del zorro-cocodrilo-murciélago es muy fuerte, me intimida.", "El zorro-ave secretaría-araña es realmente majestuoso, pero dicen que hace trizas a sus presas esparciendo su sangre por todas partes.", "El ave secretaría-carpincho-araña tiene unos colores tan bonitos.", "No pudimos ver bien al zorro-serpiente-ave secretaria, estaba enroscado en sí mismo.", "¡El carpincho-zorro-araña es tan tierno, pero cuando tiembla hace un ruido muy raro que lastima los oídos!", "¡El ave secretaria- murciélago-araña me saludo con tres de sus patas!", "¡El zorro-cocodrilo-ave secretaria dejó de bailar! ¡Todos los cuidadores están muy preocupados!", "El zorro-serpiente-carpincho parecía estar tratando de comunicarse con una mariposa, eso, o estaba asustado de que lo atacará.", "A pesar de que el observatorio estaba lleno, el ave secretaria-carpincho-murciélago seguía haciéndose el muerto", "La serpiente-murciélago-carpincho arrinconó a los niños y no dejaba que los cuidadores se les acercaran, parece que quería quedárselos como reemplazo de sus crías.", "¡El zorro-serpiente-murciélago estaba llorando! Parece que se estresó por la cantidad de gente que lo observaba.", "¡Hoy, el cocodrilo-carpincho-ave secretaria robó un huevo de un pájaro y se puso a incubarlo!", "¡Hoy por fin pude dar una vuelta en el lomo del cocodrilo-murciélago-carpincho!¡Fue tan divertido!",  }; //Agregar los comentarios acá
    private string[] Comentariosuwu2 = new string[] { "Unas arañas se metieron en los pantalones de un cuidador", "Una niña le dio algodón de azúcar a un cocodrilo", "¡voy a volver la próxima semana!", "¡Un carpincho estaba tomando mate!", "La serpiente - carpincho - araña es realmente aterradora, jugó con su comida y luego la despedazó frente a nosotros", "¡La Araña-carpincho-murciélago le arranco un brazo a un cuidador con sus pinzas!", "¡La Serpiente-zorro-cocodrilo se robó mi brazalete!", "¡El Zorro-serpiente-araña se enredó en su propia telaraña!", "¡El Ave secretaria-cocodrilo-araña estaba haciendo un baile súper extraño frente a su estanque!", "¡El zorro-ave secretaria-carpincho es tan lindo! Si pudiera, me lo llevaría a casa", "¡La serpiente-ave secretaria-araña engañó a los guardias y se escapó de su jaula! Por suerte la atraparon a tiempo", "¡El carpincho-zorro-murciélago enamoró a mis hijos!¡No podían dejar de hablar de lo tierno que era!", "¡Pudimos ver cómo la cola de la serpiente-murciélago-araña florecía!¡Fue un espectáculo increíble!", "¡El Zorro-cocodrilo-araña tiene mucha fuerza, el vidrio de su jaula tiene marcas de sus dientes!", "No pude ver a la araña-carpincho-cocodrilo, ¡nunca salió de su madriguera!", "La serpiente-cocodrilo-carpincho es enorme, no creí que hubiera suficientes insectos para que comiera", "¡El zorro-cocodrilo-carpincho se descontroló y le arrancó una pierna a uno de los cuidadores! Fue desagradable, pero no podía dejar de mirar.", "¡La araña-murciélago-cocodrilo está loca, estaba tratando de pelear con una roca!", "Es increíble como la serpiente-carpincho-ave secretaria se mueve usando su cola, ¡es tan rápida!", "¡La escoliosis de la serpiente-cocodrilo-araña del zoo empeoró otra vez! Espero que mejore", }; //Agregar los comentarios acá
    private int ComentarioRandom;
    private int ComentarioRandom2;
    public Text Comentario;
    public Text Comentario2;
    public Sprite avatar1;
    public Sprite avatar2;
    public Sprite avatar3;
    public Sprite avatar4;
    public Sprite avatar5;
    public Sprite avatar6;
    public Sprite avatar7;
    public Sprite avatar8;
    public Sprite avatar9;
    public Sprite avatar10;
    public Sprite avatar11;
    public Sprite avatar12;

    public Image avatar;
    public Image Avatarfoto2;

    // Use this for initialization
    void Start() {

        ComentarioRandom = PlayerPrefs.GetInt("comentarioRandom1");  //Cuando se escriban más comentarios, cambiar el 3 (TRES) por la cantidad de comentarios en el array de la linea 10. La cantidad de , (comas) es la cantidad de comentarios.
        print(Comentariosuwu[ComentarioRandom]);

        Comentario = GameObject.FindGameObjectWithTag("ComentarioTexto").GetComponent<Text>();
        Comentario.text = Comentariosuwu[PlayerPrefs.GetInt("comentarioRandom1")];

       //primeravatar = GameObject.FindGameObjectWithTag("avatar").GetComponent<Image>();

        ComentarioRandom2 = PlayerPrefs.GetInt("comentarioRandom2"); //Cuando se escriban más comentarios, cambiar el 4 (CUATRO) por la cantidad de comentarios en el array de la linea 11. La cantidad de , (comas)  es la cantidad de comentarios.
        print(Comentariosuwu2[ComentarioRandom2]);

        Comentario2 = GameObject.FindGameObjectWithTag("ComentarioTexto2").GetComponent<Text>();
        Comentario2.text = Comentariosuwu2[PlayerPrefs.GetInt("comentarioRandom2")];

        int AvatarRandom1 = PlayerPrefs.GetInt("avatarRandom");

        //segundoavatar = GameObject.FindGameObjectWithTag("avatar2").GetComponent<Image>();

        switch (PlayerPrefs.GetInt("avatarRandom"))
        {
            case 1:
                avatar.sprite = avatar1;
                Avatarfoto2.sprite = avatar2;
                break;
            case 2:
                avatar.sprite = avatar2;
                Avatarfoto2.sprite = avatar3;
                break;
            case 3:
                avatar.sprite = avatar3;
                Avatarfoto2.sprite = avatar4;
                break;
            case 4:
                avatar.sprite = avatar4;
                Avatarfoto2.sprite = avatar5;
                break;
            case 5:
                avatar.sprite = avatar5;
                Avatarfoto2.sprite = avatar6;
                break;
            case 6:
                avatar.sprite = avatar6;
                Avatarfoto2.sprite = avatar7;
                break;
            case 7:
                avatar.sprite = avatar7;
                Avatarfoto2.sprite = avatar8;
                break;
            case 8:
                avatar.sprite = avatar8;
                Avatarfoto2.sprite = avatar9;
                break;
            case 9:
                avatar.sprite = avatar9;
                Avatarfoto2.sprite = avatar10;
                break;
            case 10:
                avatar.sprite = avatar10;
                Avatarfoto2.sprite = avatar11;
                break;
            case 11:
                avatar.sprite = avatar11;
                Avatarfoto2.sprite = avatar12;
                break;
            case 12:
                avatar.sprite = avatar12;
                Avatarfoto2.sprite = avatar1;
                break;

            default:
                avatar.sprite = avatar11;
                Avatarfoto2.sprite = avatar3;
                break;
        }
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
