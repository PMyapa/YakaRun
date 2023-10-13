using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class turningPoint : MonoBehaviour
{
    playere playerMovement;
    [SerializeField] string dir;

    // Start is called before the first frame update
    void Start()
    {
        playerMovement = GameObject.FindObjectOfType<playere>();

    }

    private void OnTriggerEnter(Collider collider)
    {
        if (collider.gameObject.name == "Player1")
        {
            if (dir == "r")
            {
                playerMovement.turnr();
            }
            if (dir == "l")
            {
                playerMovement.turnl();
            }
        }

        //kill player
    }

    // Update is called once per frame
    void Update()
    {

    }
}
