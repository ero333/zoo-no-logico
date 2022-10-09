using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Eventos{

        public string descripcion;
        public string opcion1;
        public string opcion2;
        public void EventoGanar(string que, int cuanto)
        {
            PlayerPrefs.SetInt(que, PlayerPrefs.GetInt(que) + cuanto);
        }

        public void EventoPerder(string que, int cuanto)
        {
            PlayerPrefs.SetInt(que, PlayerPrefs.GetInt(que) - cuanto);
        }

}
