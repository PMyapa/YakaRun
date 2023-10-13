using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class goobject : MonoBehaviour
{
    public Text yScore;
    public Text HighScore;
    public Text bgemst;
    public Text ggemst;
    public Text ogemst;
    public float newScore;
    public float highScore;
    public float Bgems;
    public float Ggems;
    public float Ogems;

    /*public TextMeshProUGUI BGTotal;
    public TextMeshProUGUI GGTotal;
    public TextMeshProUGUI OGTotal;

    public float bgt;
    public float ggt;
    public float ogt;*/


 
   


    public void Start()
    {
        newScore = PlayerPrefs.GetFloat("final_score");
        yScore.text = newScore.ToString();

        highScore = PlayerPrefs.GetFloat("HighScore");
        HighScore.text =  highScore.ToString();

        Bgems = PlayerPrefs.GetFloat("Bgems");
        bgemst.text = Bgems.ToString();
        Ggems = PlayerPrefs.GetFloat("Ggems");
        ggemst.text = Ggems.ToString();
        Ogems = PlayerPrefs.GetFloat("Ogems");
        ogemst.text = Ogems.ToString();

      /*  bgt = PlayerPrefs.GetFloat("BgTotal");
        BGTotal.text = bgt.ToString();
        ggt = PlayerPrefs.GetFloat("GgTotal");
        GGTotal.text = ggt.ToString();
        ogt = PlayerPrefs.GetFloat("OgTotal");
        OGTotal.text = ogt.ToString();*/



    }

   

}
