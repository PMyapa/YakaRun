using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bgmusic : MonoBehaviour
{


    public static bgmusic bgIns;
    public AudioSource Audio;

    private void Awake()
    {
        if (bgIns != null && bgIns != this)
        {
            Destroy(this.gameObject);
            return;
        }
        bgIns = this;
        DontDestroyOnLoad(this);
    }
    public void BgOff()
    {

        Destroy(this.gameObject);
        return;
    }

    public void BgDisable()
    {
        this.gameObject.SetActive(false);
    }
    public void BgEnable()
    {
        this.gameObject.SetActive(true);
    }

    public void Start()
    {
        Audio = GetComponent<AudioSource>();
    }


   
   

    // Update is called once per frame
    void Update()
    {
        
    }
}
