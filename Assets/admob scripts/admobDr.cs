using UnityEngine.Events;
using UnityEngine;
using GoogleMobileAds.Api;
using GoogleMobileAds.Common;
using UnityEngine.UI;
using System;
using System.Collections.Generic;

public class admobDr : MonoBehaviour
{
    private RewardedAd rewardedAd;



    public UnityEvent OnAdLoadedEvent;
    public UnityEvent OnAdFailedToLoadEvent;
    public UnityEvent OnAdOpeningEvent;
    public UnityEvent OnAdFailedToShowEvent;
    public UnityEvent OnUserEarnedRewardEvent;
    public UnityEvent OnAdClosedEvent;





    // Start is called before the first frame update
    void Start()
    {   
        //original
        //ca-app-pub-7784458915951437/9115080332
        //sample
        //ca-app-pub-3940256099942544/5224354917
        string adUnitId;
#if UNITY_ANDROID
            adUnitId = "ca-app-pub-7784458915951437/9115080332";
#elif UNITY_IPHONE
            adUnitId = "ca-app-pub-3940256099942544/1712485313";
#else
        adUnitId = "unexpected_platform";
#endif

        this.rewardedAd = new RewardedAd(adUnitId);

        rewardedAd.OnAdLoaded += (sender, args) => OnAdLoadedEvent.Invoke();
        rewardedAd.OnAdFailedToLoad += (sender, args) => OnAdFailedToLoadEvent.Invoke();
        rewardedAd.OnAdOpening += (sender, args) => OnAdOpeningEvent.Invoke();
        rewardedAd.OnAdFailedToShow += (sender, args) => OnAdFailedToShowEvent.Invoke();
        rewardedAd.OnAdClosed += (sender, args) => OnAdClosedEvent.Invoke();
        rewardedAd.OnUserEarnedReward += (sender, args) => OnUserEarnedRewardEvent.Invoke();

        // Create an empty ad request.
        // AdRequest request = new AdRequest.Builder().Build();
        // Load the rewarded ad with the request.
        //this.rewardedAd.LoadAd(request);
        rewardedAd.LoadAd(CreateAdRequest());
    }



    private AdRequest CreateAdRequest()
    {
        return new AdRequest.Builder().Build();
    }



    public void UserChoseToWatchAd()
    {
        if (this.rewardedAd.IsLoaded())
        {
            this.rewardedAd.Show();
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

