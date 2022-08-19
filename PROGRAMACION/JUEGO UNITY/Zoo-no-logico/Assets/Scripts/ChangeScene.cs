using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeScene : MonoBehaviour {

    void Start()
    {
        Debug.Log("LoadSceneA");
    }


    public void MoveToScene(int sceneID)
    {
        Debug.Log("Cambio de escena");
        SceneManager.LoadScene(sceneID);
    }

    
}
