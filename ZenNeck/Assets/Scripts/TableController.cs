using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UI.TableUI;
using System.Collections.Generic;
using TMPro;

public class TableController : MonoBehaviour
{
    public TMP_Text tableText;
    public List<Record> records;

    [System.Serializable]
    public class Record
    {
        public string dateTime;
        public float percentage;
    }

    private void Start()
    {
        CreateTable();
    }

    private void CreateTable()
    {

        string tableContent = "| No\t| Time\t\t\t\t| Percentage |\n"; // 创建表格标题行

        MainManager.Records records = MainManager.Instance.records;

        int idx = 0;
        foreach (MainManager.Record record in records.records)
        {
            idx++;
            tableContent += $"| {idx}\t| {record.dateTime}\t| {record.percentage.ToString("0.00")}%\t|\n"; // 添加数据行
        }

        tableText.text = tableContent; // 设置TextMeshPro Text的文本内容
    }
}
