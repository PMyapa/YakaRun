using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Obstacle : MonoBehaviour

    
{
    playere playerMovement;

    // Start is called before the first frame update
    void Start()
    {
        playerMovement = GameObject.FindObjectOfType<playere>();

    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name == "Player1") 
        {
           playerMovement.Die();
        }

    //kill player
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
