using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using TMPro;

public class GameManager : MonoBehaviour
{
    
    public int Bgemsgm;
    public int Ggemsgm;
    public int Ogemsgm;
    public int Totalgsm;
    public static GameManager inst;

    public TextMeshProUGUI BgemScore ;
    public TextMeshProUGUI GgemScore ;
    public TextMeshProUGUI OgemScore ;
    public float gameTime = 0;
    public float TileCount;
    public float maxPlayerDistance;
    public float GemScore;
    public float finalScore;
    public float highScore;
    public float bgTotal;
    public float ggTotal;
    public float ogTotal;

    public bool startgg = false;

   
    public bool pickG;

    Animator animator;

    public int timerValue;
    public int gemLim;
    public int[] chatimes;
    public int[] chalims;

    [SerializeField] Image timerCircle;
    [SerializeField] Image timerb;

    [SerializeField] Sprite[] timerbSprite;

    int timerInt;
    float timerFloat;
   

    IEnumerator coroutine;


    public AudioClip gemsf;
    public AudioSource gemAS;


    public void BlueGemScore()
    {
        if (pickG == true)
        {
            Bgemsgm++;
            gemAS.PlayOneShot(gemsf, 0.5F);

            BgemScore.text = Bgemsgm.ToString();

            Totalgsm++;
            gemfill();

            
        }

    }

    public void GreenGemScore()
    {
        if (pickG == true)
        {
            Ggemsgm++;
            gemAS.PlayOneShot(gemsf, 0.5F);

            GgemScore.text = Ggemsgm.ToString();

            Totalgsm++;
            gemfill();

            
        }

    }

    public void OrangeGemScore()
    {
        if (pickG == true)
        {
            Ogemsgm++;
            gemAS.PlayOneShot(gemsf, 0.5F);

            OgemScore.text = Ogemsgm.ToString();

            Totalgsm++;
            gemfill();

            
        }

    }

    public void DisIncrease()
    {
        TileCount++;
    }

    public void FinalScore()
    {
        GemScore = Bgemsgm + (Ggemsgm * 2) + (Ogemsgm * 4);
        
        finalScore = GemScore * maxPlayerDistance;
        finalScore = Mathf.Round(finalScore );
        PlayerPrefs.SetFloat("final_score", finalScore);
        

        float bgtsm = bgTotal + Bgemsgm ;
        float ggtsm = ggTotal + Ggemsgm;
        float ogtsm = ogTotal + Ogemsgm;

        PlayerPrefs.SetFloat("Bgems", Bgemsgm);
        PlayerPrefs.SetFloat("Ggems", Ggemsgm);
        PlayerPrefs.SetFloat("Ogems", Ogemsgm);

        PlayerPrefs.SetFloat("BgTotal", bgtsm);
        PlayerPrefs.SetFloat("GgTotal", ggtsm);
        PlayerPrefs.SetFloat("OgTotal", ogtsm);

        


        if (finalScore > highScore)
        {
            highScore = finalScore;



        }


        PlayerPrefs.SetFloat("HighScore", highScore);
        PlayerPrefs.Save();


    }

 


  

    public void PauseGame()
    {
        Time.timeScale = 0;
    }

    public void ResumeGame()
    {
        Time.timeScale = 1;
    }

    public void gmainmenu()
    {
        SceneManager.LoadScene("menu");
        Time.timeScale = 1;
    }

    private void Awake()
    {
        inst = this;
    }

    // Start is called before the first frame update
    public void Start()
    {
        float chaIndex = PlayerPrefs.GetFloat("cha");
        float numberofchas = 4;

        for (int i = 0; i < numberofchas; i++)
        {
            if (i == chaIndex)
            {
                timerValue = chatimes[i];
                gemLim = chalims[i];
            }
            
        }







       
        highScore = PlayerPrefs.GetFloat("HighScore");
        bgTotal = PlayerPrefs.GetFloat("BgTotal");
        ggTotal = PlayerPrefs.GetFloat("GgTotal");
        ogTotal = PlayerPrefs.GetFloat("OgTotal");

        pickG = true;


        timerInt = timerValue;
        timerFloat = (float)timerValue;
        coroutine = Countdown();


        timerb.GetComponent<Image>().sprite = timerbSprite[0];
        timerCircle.fillAmount = 0f;



    }

 

    public void StartCountdown()
    {
        StartCoroutine(coroutine);
        timerb.GetComponent<Image>().sprite = timerbSprite[1];


    }

    public void StopCountdown()
    {
        StopCoroutine(coroutine);
        pickG = true;

        
        timerCircle.fillAmount = 0;
        timerb.GetComponent<Image>().sprite = timerbSprite[0];
    }

    IEnumerator Countdown()
    {
        while (timerFloat > 0)
        {
            timerFloat -= Time.deltaTime;
            timerCircle.fillAmount = timerFloat / timerValue;
            yield return null;
        }
        StopCountdown();
    }




    // Update is called once per frame
    public void Update()
    {
        
        maxPlayerDistance = TileCount - 15f;


        if (Totalgsm >= gemLim )
        {
            timerFloat = (float)timerValue;
            coroutine = Countdown();
            StartCountdown();
            
            pickG = false;
            
            
            Totalgsm = 0;
            
        }

        

        

 
    }

    public void gemfill()
    {
        
        
        float tff = (float)Totalgsm;
        float gff = (float)gemLim;
        float rsff = tff / gff;

        timerCircle.fillAmount = rsff;

    }

    public void btn()
    {
        startgg = true;

      



    }

}
