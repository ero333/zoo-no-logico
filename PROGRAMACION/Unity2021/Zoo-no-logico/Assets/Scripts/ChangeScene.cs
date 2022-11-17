using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeScene : MonoBehaviour {
    

    void Start()
    {

    }


    public void MoveToScene(int sceneID)
    {
        SceneManager.LoadScene(sceneID);
    }

    public void VolverAJugar()
    {
        PlayerPrefs.SetInt("Dias", 0);
    }

    public void NoRestarAnimales()
    {
        PlayerPrefs.SetInt("Cantidad" + PlayerPrefs.GetString("Slot1"), PlayerPrefs.GetInt("Cantidad" + PlayerPrefs.GetString("Slot1")) + 1);
        PlayerPrefs.SetInt("Cantidad" + PlayerPrefs.GetString("Slot2"), PlayerPrefs.GetInt("Cantidad" + PlayerPrefs.GetString("Slot2")) + 1);
        PlayerPrefs.SetInt("Cantidad" + PlayerPrefs.GetString("Slot3"), PlayerPrefs.GetInt("Cantidad" + PlayerPrefs.GetString("Slot3")) + 1);
    }

    public void SumarContinuarParaAnalytics(string playerPref)
    {
        PlayerPrefs.SetInt(playerPref, PlayerPrefs.GetInt(playerPref) + 1);
    }

    
}
