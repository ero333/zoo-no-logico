using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PlayTime : MonoBehaviour {

	[HideInInspector]
	private float time;
	private int totalTimeSeconds;

	void Awake()
    {
		DontDestroyOnLoad(this.gameObject);
    }

	void Start () {
		
	}

    private void Update()
    {
    }

    // Update is called once per frame
    void FixedUpdate () {
		time += (Time.deltaTime);
		totalTimeSeconds = Mathf.RoundToInt(time);
        PlayerPrefs.SetInt("TiempoJuego", totalTimeSeconds);
    }
}
