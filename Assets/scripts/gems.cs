using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gems : MonoBehaviour
{
    public float turnSpeedg = 90f;
    public int GemI;


    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.GetComponent<Obstacle>() != null)
        {
            Destroy(gameObject);
            return;
        }

        if (other.gameObject.name != "Player1")
        {
            return;
        }

        if (GemI == 0)
        {
            GameManager.inst.BlueGemScore();
        }
        else if (GemI == 1)
        {
            GameManager.inst.GreenGemScore();
        }
        else if (GemI == 2)
        {
            GameManager.inst.OrangeGemScore();
        }

        Destroy(gameObject);
    }



    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    private void Update()
    {
        transform.Rotate(0, 0, turnSpeedg * Time.deltaTime);
    }
}
