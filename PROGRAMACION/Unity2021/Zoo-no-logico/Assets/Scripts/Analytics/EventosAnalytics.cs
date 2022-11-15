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

        });  //No está terminado

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
    }

    public void comprar()
    {
        AnalyticsService.Instance.CustomData("cruza", new Dictionary<string, object> {
            {"vez", PlayerPrefs.GetInt("vezCompra")},
            {"animal", PlayerPrefs.GetString("animalCompra")},

        });  //No está terminado

        Debug.Log("vez " +  PlayerPrefs.GetInt("vezCompra"));
        Debug.Log("animal " + PlayerPrefs.GetString("animalCompra"));
    }

    public void cruza()
    {
        AnalyticsService.Instance.CustomData("cruza", new Dictionary<string, object> {
            {"dinero", PlayerPrefs.GetInt("Moneditas")},

        });  //No está terminado
    }

    public void ganar()
    {

    }

    public void leer_cartas()
    {

    }

    public void salir()
    {


    }

    public void iniciar_partida()
    {

    }

    public void continuar_partida()
    {

    }

    public void codex()
    {

    }

    public void ver_mapa()
    {

    }

    public void borrar_animal()
    {

    }

    public void stasis()
    {

    }

    public void leer_tutorial()
    {

    }

    public void fin_del_turno()
    {

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

