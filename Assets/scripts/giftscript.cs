using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class giftscript : MonoBehaviour
{
    public Sprite dropenbox;
    [SerializeField] Button openb;
    [SerializeField] TextMeshProUGUI openbT;

    [SerializeField] GameObject drboxImage;
    public GameObject rewardGems;
    public GameObject rightdr;
    public GameObject backButtondr;
    public Text drtext;

    public Text drBlueText;
    public Text drGreenText;
    public Text drOrangeText;


    public float drBlue;
    public float drGreen;
    public float drOrange;


    gempannel gemSript ; 

    [SerializeField] Image succeedRnd;

    IEnumerator coroutinedr ;

    [SerializeField] float drRoundTime;
    float drRoundFulltime;


    // Start is called before the first frame update
    void Start()
    {
        openbT.text = "  Loading.." ;

        gemSript = GameObject.FindObjectOfType<gempannel>();


        drBlue = Mathf.Round(Random.Range(40f,60f));
        drBlueText.text = drBlue.ToString();

        drGreen = Mathf.Round(Random.Range(35f, 55f));
        drGreenText.text = drGreen.ToString();

        drOrange = Mathf.Round(Random.Range(30f, 50f));
        drOrangeText.text = drOrange.ToString();



        succeedRnd.fillAmount = 0f;


        coroutinedr = Countdowndr();

        drRoundFulltime = drRoundTime;
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    public void StartCountdowndr()
    {
        StartCoroutine(coroutinedr);
        backButtondr.SetActive(false);
        openb.gameObject.SetActive(false);


    }

    public void StopCountdowndr()
    {
        StopCoroutine(coroutinedr); 
        drboxImage.SetActive(false);
        rewardGems.SetActive(false);
        rightdr.SetActive(true);
        backButtondr.SetActive(true);
        
        collectReward();
        


    }

    IEnumerator Countdowndr()
    {
        while (drRoundTime > 0)
        {
            drRoundTime -= Time.deltaTime;
            //succeedRnd.fillAmount = drRoundTime / drRoundFulltime;

            succeedRnd.fillAmount =  ( drRoundFulltime - drRoundTime) / drRoundFulltime;

            yield return null;
        }
        StopCountdowndr();
    }

    public void collectReward()
    {
        float getTb = PlayerPrefs.GetFloat("BgTotal");
        float setTb = getTb + drBlue ;
        PlayerPrefs.SetFloat("BgTotal", setTb);

        float getTg = PlayerPrefs.GetFloat("GgTotal");
        float setTg = getTg + drGreen ;
        PlayerPrefs.SetFloat("GgTotal", setTg);

        float getTo = PlayerPrefs.GetFloat("OgTotal");
        float setTo = getTo + drOrange ;
        PlayerPrefs.SetFloat("OgTotal", setTo);




        PlayerPrefs.Save();
        drtext.text = "Collected";
        gemSript.Start();
    }

    public void dlbottonLoad()
    {
        openbT.text = "Open";
        openb.interactable = true ;
    }

    public void drOffline()
    {
        openbT.text = "Can't Connect";
    }

    public void openGift()
    {
        string timet = System.DateTime.UtcNow.ToLocalTime().ToString("Myyd");
        PlayerPrefs.SetString("hora", timet);
        drboxImage.GetComponent<Image>().sprite = dropenbox;
        rewardGems.SetActive(true);
        StartCountdowndr();
    }
}
