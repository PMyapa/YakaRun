using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class subutton : MonoBehaviour
{
    public float turnSpeed = 90f;


    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.GetComponent<Obstacle>() != null)
        {
            Destroy(gameObject);
            return;
        }

        if (other.gameObject.name != "Player")
        {
            return;
        }

        //GameManager.inst.activateSubutton();

        Destroy(gameObject);
    }



    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
   private void Update()
    {
        transform.Rotate(0,  turnSpeed * Time.deltaTime , 0);
    }
}
