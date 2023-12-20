using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;

public class MainManager : MonoBehaviour
{
    public static MainManager Instance;
    public Records records;

    private const string SAVE_PATH = "/records.json";

    private void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        DontDestroyOnLoad(gameObject);
        LoadRecords();
    }

    [System.Serializable]
    public class Record
    {
        public string dateTime;
        public float percentage;
    }

    [System.Serializable]
    public class Records
    {
        public List<Record> records;
    }

    public void AddAndSaveRecord(string dateTime, float percentage)
    {
        Debug.Log($"JSON: 1- {JsonUtility.ToJson(dateTime)}");
        Record r = new Record();
        r.dateTime = dateTime;
        r.percentage = percentage;
        AddRecord(r);
        SaveRecords();
    }

    public void AddRecord(Record record)
    {
        if (record == null)
        {
            return;
        }
        if (records == null)
        {
            records = new Records();
            records.records = new List<Record>();
        }
        Debug.Log($"JSON: {JsonUtility.ToJson(record)}");
        records.records.Add(record);
    }

    public void SaveRecords()
    {
        string json = JsonUtility.ToJson(records);
        File.WriteAllText(GetSavePath(), json);
    }

    public void LoadRecords()
    {
        records = new Records();
        records.records = new List<Record>();

        string path = GetSavePath();
        if (File.Exists(path))
        {
            string json = File.ReadAllText(path);
            records = JsonUtility.FromJson<Records>(json);
        }
    }

    private string GetSavePath()
    {
        string fullPath = Application.persistentDataPath + SAVE_PATH;

        return fullPath;
    }
}
