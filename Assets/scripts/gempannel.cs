using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class gempannel : MonoBehaviour
{
    public TextMeshProUGUI BGTotal;
    public TextMeshProUGUI GGTotal;
    public TextMeshProUGUI OGTotal;

    public float bgt;
    public float ggt;
    public float ogt;

    // Start is called before the first frame update
    public void Start()
    {
        bgt = PlayerPrefs.GetFloat("BgTotal");
        BGTotal.text = bgt.ToString();
        ggt = PlayerPrefs.GetFloat("GgTotal");
        GGTotal.text = ggt.ToString();
        ogt = PlayerPrefs.GetFloat("OgTotal");
        OGTotal.text = ogt.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
