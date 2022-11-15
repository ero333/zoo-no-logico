using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

public static class SaveSystem  {

	public static void SaveGame (popularityTest popularidad, MoneySetter monedas)
    {
        BinaryFormatter formatter = new BinaryFormatter();

        string path = Application.persistentDataPath + "/save.txt";
        FileStream stream = new FileStream(path, FileMode.Create);

        GameData data = new GameData(popularidad, monedas);

        formatter.Serialize(stream, data);
        stream.Close();
    }

    public static GameData LoadGame ()
    {
        string path = Application.persistentDataPath + "/save.txt";
        if (File.Exists(path))
        {
            BinaryFormatter formatter = new BinaryFormatter();
            FileStream stream = new FileStream(path, FileMode.Open);

            GameData data = formatter.Deserialize(stream) as GameData;
            stream.Close();


            Debug.Log(data.jaula0);
            Debug.Log(data.jaula1);
            Debug.Log(data.jaula2);
            Debug.Log(data.jaula3);

            return data;
        } else
        {
            Debug.LogError("save file not found in" + path);
            return null;
        }
    }
}
