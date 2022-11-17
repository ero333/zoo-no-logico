using System.Collections;
using Unity.Services.Core;
using Unity.Services.Analytics;
using System.Collections.Generic;
using UnityEngine;

public class EventosAnalytics : MonoBehaviour
{

    void Awake()
    {
        DontDestroyOnLoad(this.gameObject);
    }


    // Start is called before the first frame update
    async void Start()
    {
        try
        {
            await UnityServices.InitializeAsync();
            List<string> consentIdentifiers = await AnalyticsService.Instance.CheckForRequiredConsents();
        }
        catch (ConsentCheckException e)
        {
            // Something went wrong when checking the GeoIP, check the e.Reason and handle appropriately.
        }
    }

    public void game_over()
    {
        AnalyticsService.Instance.CustomData("game_over", new Dictionary<string, object> {
            {"dinero", PlayerPrefs.GetInt("Moneditas")},
            {"cruzas_exitosas", PlayerPrefs.GetInt("cruzasExito")},
            {"cruzas_fallidas", PlayerPrefs.GetInt("cruzasFalla")},
            {"tiempo_juego", PlayerPrefs.GetInt("TiempoJuego")},
            {"cruzas", PlayerPrefs.GetInt("totalCodex")},
            {"cupos", PlayerPrefs.GetInt("JaulasOcupadas")},
            {"dias", PlayerPrefs.GetInt("Dias")},
            {"animales_stasis_total", PlayerPrefs.GetInt("totalStasis")},
            {"animales_stasis_cantidad", PlayerPrefs.GetInt("CantidadCruzasEnStasis")},
            {"animales_lazaro", PlayerPrefs.GetInt("totalVendidos")},
            {"cartas", PlayerPrefs.GetInt("cartasTotales")},

        });  //TERMINADO

        Debug.Log("dinero " + PlayerPrefs.GetInt("Moneditas"));
        Debug.Log("cruzas_exitosas " + PlayerPrefs.GetInt("cruzasExito"));
        Debug.Log("cruzas_fallidas " + PlayerPrefs.GetInt("cruzasFalla"));
        Debug.Log("tiempo_juego " + PlayerPrefs.GetInt("TiempoJuego"));
        Debug.Log("cruzas " + PlayerPrefs.GetInt("totalCodex"));
        Debug.Log("cupos " + PlayerPrefs.GetInt("JaulasOcupadas"));
        Debug.Log("dias " + PlayerPrefs.GetInt("Dias"));
        Debug.Log("animales_stasis_total " + PlayerPrefs.GetInt("totalStasis"));
        Debug.Log("animales_stasis_cantidad " + PlayerPrefs.GetInt("CantidadCruzasEnStasis"));
        Debug.Log("animales_lazaro " + PlayerPrefs.GetInt("totalVendidos"));
        Debug.Log("cartas" + PlayerPrefs.GetInt("cartasTotales"));
    }

    public void comprar()
    {
        AnalyticsService.Instance.CustomData("comprar", new Dictionary<string, object> {
            {"vez", PlayerPrefs.GetInt("vezCompra")},
            {"animal", PlayerPrefs.GetString("animalCompra")},
            {"cantidad_ave", PlayerPrefs.GetInt("avesTotales")},
            {"cantidad_serpiente", PlayerPrefs.GetInt("serpientesTotales")},
            {"cantidad_murcielago", PlayerPrefs.GetInt("murcielagosTotales")},
            {"cantidad_zorro", PlayerPrefs.GetInt("zorrosTotales")},
            {"cantidad_cocodrilo", PlayerPrefs.GetInt("cocodrilosTotales")},
            {"cantidad_arana", PlayerPrefs.GetInt("aranasTotales")},
            {"cantidad_carpincho", PlayerPrefs.GetInt("carpinchosTotales")},

        });  //TERMINADO

        Debug.Log("vez" +  PlayerPrefs.GetInt("vezCompra"));
        Debug.Log("animal " + PlayerPrefs.GetString("animalCompra"));
        Debug.Log("cantidad_ave" + PlayerPrefs.GetInt("avesTotales"));
        Debug.Log("cantidad_serpiente" + PlayerPrefs.GetInt("serpientesTotales"));
        Debug.Log("cantidad_murcielago" + PlayerPrefs.GetInt("murcielagosTotales"));
        Debug.Log("cantidad_zorro" + PlayerPrefs.GetInt("zorrosTotales"));
        Debug.Log("cantidad_cocodrilo" + PlayerPrefs.GetInt("cocodrilosTotales"));
        Debug.Log("cantidad_arana" + PlayerPrefs.GetInt("aranasTotales"));
        Debug.Log("cantidad_carpincho" + PlayerPrefs.GetInt("carpinchosTotales"));
    }

    public void cruza()
    {
        AnalyticsService.Instance.CustomData("cruza", new Dictionary<string, object> {
            {"animal3", PlayerPrefs.GetString("animalSlot3")},
            {"animal2", PlayerPrefs.GetString("animalSlot2")},
            {"animal1", PlayerPrefs.GetString("animalSlot1")},
            {"numero_id", PlayerPrefs.GetInt("indexCurrentCruza")},
            {"vez", PlayerPrefs.GetInt("combinarTotales")},

        });  //TERMINADO

        Debug.Log("animal3" + PlayerPrefs.GetString("animalSlot3"));
        Debug.Log("animal2" + PlayerPrefs.GetString("animalSlot2"));
        Debug.Log("animal1" + PlayerPrefs.GetString("animalSlot1"));
        Debug.Log("numero_id" + PlayerPrefs.GetInt("indexCurrentCruza"));
        Debug.Log("vez" + PlayerPrefs.GetInt("combinarTotales"));
    }

    public void ganar()
    {
        AnalyticsService.Instance.CustomData("ganar", new Dictionary<string, object> {
            {"tiempo_juego", PlayerPrefs.GetInt("TiempoJuego")},
            {"cruzas_fallidas", PlayerPrefs.GetInt("cruzasFalla")},
            {"cruzas_exitosas", PlayerPrefs.GetInt("cruzasExito")},
            {"cupos", PlayerPrefs.GetInt("JaulasOcupadas")},
            {"animales_lazaro", PlayerPrefs.GetInt("totalVendidos")},
            {"animales_stasis_total", PlayerPrefs.GetInt("totalStasis")},
            {"animales_stasis_cantidad", PlayerPrefs.GetInt("CantidadCruzasEnStasis")},
            {"dinero", PlayerPrefs.GetInt("Moneditas")},
            {"dias", PlayerPrefs.GetInt("Dias")},
            {"cartas", PlayerPrefs.GetInt("cartasTotales")},
            {"cruzas", PlayerPrefs.GetInt("totalCodex")},
        }); //TERMINADO

        Debug.Log("tiempo_juego" + PlayerPrefs.GetInt("Tiempojuego"));
        Debug.Log("cruzas_fallidas" + PlayerPrefs.GetInt("cruzasFalla"));
        Debug.Log("cruzas_exitosas" + PlayerPrefs.GetInt("cruzasExito"));
        Debug.Log("cupos" + PlayerPrefs.GetInt("JaulasOcupadas"));
        Debug.Log("animales_lazaro" + PlayerPrefs.GetInt("totalVendidos"));
        Debug.Log("animales_stasis_total" + PlayerPrefs.GetInt("totalStasis"));
        Debug.Log("animales_stasis_cantidad" + PlayerPrefs.GetInt("CantidadCruzasEnStasis"));
        Debug.Log("dinero" + PlayerPrefs.GetInt("Moneditas"));
        Debug.Log("dias" + PlayerPrefs.GetInt("Dias"));
        Debug.Log("cartas" + PlayerPrefs.GetInt("cartasTotales"));
        Debug.Log("cruzas" + PlayerPrefs.GetInt("totalCodex"));

    }

    public void salir()
    {
         AnalyticsService.Instance.CustomData("salir", new Dictionary<string, object> {
            {"tiempo_juego", PlayerPrefs.GetInt("TiempoJuego")},
            {"cruzas_fallidas", PlayerPrefs.GetInt("cruzasFalla")},
            {"cruzas_exitosas", PlayerPrefs.GetInt("cruzasExito")},
            {"cupos", PlayerPrefs.GetInt("JaulasOcupadas")},
            {"animales_lazaro", PlayerPrefs.GetInt("totalVendidos")},
            {"animales_stasis_total", PlayerPrefs.GetInt("totalStasis")},
            {"animales_stasis_cantidad", PlayerPrefs.GetInt("CantidadCruzasEnStasis")},
            {"dinero", PlayerPrefs.GetInt("Moneditas")},
            {"dias", PlayerPrefs.GetInt("Dias")},
            {"cartas", PlayerPrefs.GetInt("cartasTotales")},
            {"cruzas", PlayerPrefs.GetInt("totalCodex")},
        }); //TERMINADO

        Debug.Log("tiempo_juego" + PlayerPrefs.GetInt("Tiempojuego"));
        Debug.Log("cruzas_fallidas" + PlayerPrefs.GetInt("cruzasFalla"));
        Debug.Log("cruzas_exitosas" + PlayerPrefs.GetInt("cruzasExito"));
        Debug.Log("cupos" + PlayerPrefs.GetInt("JaulasOcupadas"));
        Debug.Log("animales_lazaro" + PlayerPrefs.GetInt("totalVendidos"));
        Debug.Log("animales_stasis_total" + PlayerPrefs.GetInt("totalStasis"));
        Debug.Log("animales_stasis_cantidad" + PlayerPrefs.GetInt("CantidadCruzasEnStasis"));
        Debug.Log("dinero" + PlayerPrefs.GetInt("Moneditas"));
        Debug.Log("dias" + PlayerPrefs.GetInt("Dias"));
        Debug.Log("cartas" + PlayerPrefs.GetInt("cartasTotales"));
        Debug.Log("cruzas" + PlayerPrefs.GetInt("totalCodex"));
    }

    public void iniciar_partida()
    {
        AnalyticsService.Instance.CustomData("iniciar_partida", new Dictionary<string, object> {
            {"vez", PlayerPrefs.GetInt("inicioPartidaTotales")},
        
        }); //TERMINADO
        Debug.Log("vez" + PlayerPrefs.GetInt("inicioPartidaTotales"));
    }

    public void continuar_partida()
    {
        AnalyticsService.Instance.CustomData("continuar_partida", new Dictionary<string, object> {
            {"vez", PlayerPrefs.GetInt("continuarPartidaTotales")},

        }); //TERMINADO
        Debug.Log("vez" + PlayerPrefs.GetInt("continuarPartidaTotales"));

    }

    public void codex()
    {
        AnalyticsService.Instance.CustomData("codex", new Dictionary<string, object> {
            {"vez", PlayerPrefs.GetInt("codexTotales")},

        }); //TERMINADO
        Debug.Log("vez" + PlayerPrefs.GetInt("codexTotales"));

    }

    public void ver_mapa()
    {
        AnalyticsService.Instance.CustomData("ver_mapa", new Dictionary<string, object> {
            {"vez", PlayerPrefs.GetInt("mapaTotales")},

        }); //TERMINADO
        Debug.Log("vez" + PlayerPrefs.GetInt("mapaTotales"));
    }

    public void borrar_animal()
    {
        AnalyticsService.Instance.CustomData("borrar_animal", new Dictionary<string, object> {
            {"numero_id", PlayerPrefs.GetInt("IndexDesocuparJaula")},

        }); //TERMINADO
        Debug.Log("numero_id" + PlayerPrefs.GetInt("IndexDesocuparJaula"));
    }

    public void stasis()
    {
        AnalyticsService.Instance.CustomData("stasis", new Dictionary<string, object> {
            {"vez", PlayerPrefs.GetInt("stasisTotales")},

        }); //TERMINADO
        Debug.Log("vez" + PlayerPrefs.GetInt("stasisTotales"));
    }

    public void leer_tutorial()
    {
        AnalyticsService.Instance.CustomData("leer_tutorial", new Dictionary<string, object> {
            {"vez", PlayerPrefs.GetInt("tutorialTotales")},

        }); //TERMINADO
        Debug.Log("vez" + PlayerPrefs.GetInt("tutorialTotales"));
    }

    public void fin_del_turno()
    {
        AnalyticsService.Instance.CustomData("fin_del_turno", new Dictionary<string, object> {
            {"popularidad", PlayerPrefs.GetInt("Popularidad")},
            {"cupos", PlayerPrefs.GetInt("JaulasOcupadas")},
            {"dias", PlayerPrefs.GetInt("Dias")},
            {"dinero", PlayerPrefs.GetInt("Moneditas")},
            {"tiempo", PlayerPrefs.GetInt("TiempoJuego")},

        }); //TERMINADO

        Debug.Log("popularidad" + PlayerPrefs.GetInt("Popularidad"));
        Debug.Log("cupos" + PlayerPrefs.GetInt("JaulasOcupadas"));
        Debug.Log("dias" + PlayerPrefs.GetInt("Dias"));
        Debug.Log("dinero" + PlayerPrefs.GetInt("Moneditas"));
        Debug.Log("tiempo" + PlayerPrefs.GetInt("TiempoJuego"));
    }

    public void leer_evento()
    {

    }

    public void mandar_a_stasis()
    {

    }

    public void mandar_a_lazaro()
    {

    }

    public void elegir_carta()
    {

    }

    public void calificacion()
    {

    }
}


// Update is called once per frame

//public void perderEvent()
//{
//    Unity.Services.Analytics("CuantoDineroTeniasCuandoPerdiste", PlayerPrefs.GetInt("Moneditas"));
//}

