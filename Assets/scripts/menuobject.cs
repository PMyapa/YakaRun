using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.UI;

public class menuobject : MonoBehaviour
{
    public Sprite[] muteb;
    public GameObject mutebtn;
    public GameObject hcTex;
    public float mhscor;
    public GameObject rewardB;
    public GameObject settingPanel, instructionPanel, exitPanel, settingButton, exitButton;
    public bool activeBUttons;


    [SerializeField] GameObject ExitPan;



    void Start()
    {
        PlayerPrefs.SetFloat("cha", 0);
        //PlayerPrefs.SetFloat("BgTotal", 1001);
        //PlayerPrefs.SetFloat("GgTotal", 1001);
        //PlayerPrefs.SetFloat("OgTotal", 1001);
        //PlayerPrefs.DeleteAll();

        string savedd = PlayerPrefs.GetString("hora");

        mhscor = PlayerPrefs.GetFloat("HighScore");

        string timet = System.DateTime.UtcNow.ToLocalTime().ToString("Myyd");

        if (timet != savedd && mhscor >= 1 )
        {
            rewardB.SetActive(true);
        }


        activeBUttons = true ;


        mhscor = PlayerPrefs.GetFloat("HighScore");
        if (mhscor <= 0)
        {
            hcTex.SetActive(false) ;
        }
        else 
        {
            hcTex.SetActive(true) ;
            Text mHighScore = hcTex.GetComponent<Text>();
            mHighScore.text = "High Score :" + mhscor.ToString();

           
        }
        


        if (bgmusic.bgIns.Audio.isPlaying)
        {
            
            mutebtn.GetComponent<Image>().sprite = muteb[1];
        }
        else
        {
           
            mutebtn.GetComponent<Image>().sprite = muteb[0];
        }


    }

    public void Update()
    {
        if (activeBUttons)
        {
            exitButton.SetActive(true);
            settingButton.SetActive(true);
        }
        else
        {
            exitButton.SetActive(false);
            settingButton.SetActive(false);
        }


        if (Application.platform == RuntimePlatform.Android)
        {
            if (Input.GetKey(KeyCode.Escape))
            {
                if (activeBUttons)
                {
                    ExitPan.SetActive(true);
                }
                else
                {
                    settingPanel.SetActive(false);
                    exitPanel.SetActive(false); ;
                    instructionPanel.SetActive(false); ;

                    activeBUttons = true;

                }
                

                return;
            }
        }


        if (settingPanel.activeSelf || instructionPanel.activeSelf || exitPanel.activeSelf )
        {
            buttonDeactive();
        }
        
    }

    public void MusicToggle()
    {
        if (bgmusic.bgIns.Audio.isPlaying)
        {
            bgmusic.bgIns.Audio.Pause();
            mutebtn.GetComponent<Image>().sprite = muteb[0];
        }
        else
        {
            bgmusic.bgIns.Audio.Play();
            mutebtn.GetComponent<Image>().sprite = muteb[1];
        }


    }

    public void buttonActive()
    {
        activeBUttons = true ;
    }

    public void buttonDeactive()
    {
        activeBUttons = false ;
    }

    public void playbutton()
    {
        SceneManager.LoadScene("game");
    }
}
