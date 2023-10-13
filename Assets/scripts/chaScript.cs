using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class chaScript : MonoBehaviour
{
    public int numberofchas = 4;
    public float chaIndex;
    public GameObject[] head;
    public GameObject body;
    public GameObject cloth;
    public Texture[] bodyT;
    public Texture[] clothT;
    public Renderer bodyTex;
    public Renderer clothTex;
    public Rigidbody rb;

    // Start is called before the first frame update
    void Start()
    {
        //int nofchas = 2;

        chaIndex = PlayerPrefs.GetFloat("cha");
        /* if (chaIndex = 0)
         {

         }*/
        for (int i = 0; i < numberofchas; i++)
        {
            if (i == chaIndex)
            {
                head[i].SetActive(true);

                bodyTex = body.GetComponent<Renderer>();
                bodyTex.material.mainTexture = bodyT[i];
                clothTex = cloth.GetComponent<Renderer>(); 
                clothTex.material.mainTexture = clothT[i];

            }
            else 
            {
                head[i].SetActive(false);
            }
        }
    }


    public void avatar(int chai)
    {

        //rb.position.y = 0f;

        Vector3 move = new Vector3(0, 0, 0) ;
        rb.MovePosition(move);

        PlayerPrefs.SetFloat("cha", chai);


        for (int i = 0; i < numberofchas; i++)
        {
            if (i == chai)
            {
                head[i].SetActive(true);

                bodyTex = body.GetComponent<Renderer>();
                bodyTex.material.mainTexture = bodyT[i];
                clothTex = cloth.GetComponent<Renderer>();
                clothTex.material.mainTexture = clothT[i];

            }
            else
            {
                head[i].SetActive(false);
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
