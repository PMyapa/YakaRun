using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sidef : MonoBehaviour


{
    playere playerMovement;

    // Start is called before the first frame update
    void Start()
    {
        playerMovement = GameObject.FindObjectOfType<playere>();

    }

    private void OnTriggerStay(Collider collider)
    {
        if (collider.gameObject.name == "Player1")
        {
            playerMovement.horizontalMultiplier = 0;
        }

        //kill player
    }

    private void OnTriggerExit(Collider collider)
    {
        if (collider.gameObject.name == "Player1")
        {
            playerMovement.horizontalMultiplier = 1;
        }

        //kill player
    }

    // Update is called once per frame
    void Update()
    {

    }
}