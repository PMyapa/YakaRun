using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class avatarButtons : MonoBehaviour
{
    public float chaIndex;
    public string[] chaName;
    public TextMeshProUGUI chaNametext;

    public Color32[] rgba;

    public string[] chaSpeed;
    public string[] chaBox;
    public string[] chaTimeDet;
    [SerializeField] Text speeddet;
    [SerializeField] Text boxdet;
    [SerializeField] Text timedet;

    [SerializeField] GameObject lockedPanel;
    public bool avatarBack;

    [SerializeField] Button bbtn;
    [SerializeField] GameObject bbtnl;

    [SerializeField] Button gbtn;
    [SerializeField] GameObject gbtnl;

    [SerializeField] Button obtn;
    [SerializeField] GameObject obtnl;


    [SerializeField] GameObject lockGemSprite;
    [SerializeField] Text lockText;
    [SerializeField] Sprite[] unlockGems;


    // Start is called before the first frame update
    void Start()
    {
        avatarBack = true;

        float bgt = PlayerPrefs.GetFloat("BgTotal");
        float ggt = PlayerPrefs.GetFloat("GgTotal");
        float ogt = PlayerPrefs.GetFloat("OgTotal");

        if (bgt < 900)
        {
            bbtn.interactable = false;
            bbtnl.SetActive(true);
        }
        else
        {
            bbtn.interactable = true;
            bbtnl.SetActive(false);
        }

        if (ggt < 900)
        {
            gbtn.interactable = false;
            gbtnl.SetActive(true);
        }
        else
        {
            gbtn.interactable = true;
            gbtnl.SetActive(false);
        }


        if (ogt < 900)
        {
            obtn.interactable = false;
            obtnl.SetActive(true);
        }
        else
        {
            obtn.interactable = true;
            obtnl.SetActive(false);
        }
    }

    public void lockPannel(int lockcha)
    {
        deactiveAvatarBack();



    if (lockcha == 1)
        {
            lockGemSprite.GetComponent<Image>().sprite = unlockGems[1];

            lockText.text = "Unlock MAYURA\n Need: 900  \n Basic speed: 1.2 \n Collection limit: 20  \n Refreshing Time:9 s ";
        }
    else if (lockcha == 2)
        {
            lockGemSprite.GetComponent<Image>().sprite = unlockGems[2];

            lockText.text = "Unlock NAAGA\n Need: 900  \n Basic speed: 1.4 \n Collection limit: 30  \n Refreshing Time:6 s ";
        }
    else if (lockcha == 3)
        {
            lockGemSprite.GetComponent<Image>().sprite = unlockGems[3];

            lockText.text = "Unlock GURULU\n Need: 900  \n Basic speed: 1.6 \n Collection limit: 40  \n Refreshing Time:3 s ";
        }





    }


    public void activeAvatarBack()
    {
        avatarBack = true;
    }

    public void deactiveAvatarBack()
    {
        avatarBack = false;
    }


    // Update is called once per frame
    void Update()
    {
        chaIndex = PlayerPrefs.GetFloat("cha"); 

        for (int i = 0; i < 4; i++)
        {
            if (i == chaIndex)
            {
                chaNametext.text = chaName[i];
                chaNametext.color = rgba[i];
                speeddet.text = chaSpeed[i];
                boxdet.text = chaBox[i];
                timedet.text = chaTimeDet[i];

            }

        }



        


        if (Application.platform == RuntimePlatform.Android)
        {
            if (Input.GetKey(KeyCode.Escape))
            {
                if (avatarBack)
                {
                    SceneManager.LoadScene("menu");
                }
                else
                {
                    lockedPanel.SetActive(false);
                    

                    avatarBack = true;

                }


                return;
            }
        }

    }
}
