using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class coinBox : MonoBehaviour
{
    public GameObject[] gemPrefab;
    [SerializeField] float oChance = 0.2f;
    [SerializeField] float gChance = 0.5f;
    

    // Start is called before the first frame update
    void Start()
    {


        int coinsToSpawn = 8 ;
        for (int i = 0; i < coinsToSpawn; i++)
        {
            float random = Random.Range(0f, 1f);
            if (random < oChance)
            {
                GameObject temp = Instantiate(gemPrefab[2], transform);
                temp.transform.position = Getrp(GetComponent<Collider>());
                
            }
            else if (random < gChance)
            {
                GameObject temp = Instantiate(gemPrefab[1], transform);
                temp.transform.position = Getrp(GetComponent<Collider>());
            }
            else 
            {
                GameObject temp = Instantiate(gemPrefab[0], transform);
                temp.transform.position = Getrp(GetComponent<Collider>());
            }

        }

        Vector3 Getrp(Collider collider)
        {
            Vector3 point = new Vector3
                (Random.Range(collider.bounds.min.x, collider.bounds.max.x),
                Random.Range(collider.bounds.min.y, collider.bounds.max.y),
                Random.Range(collider.bounds.min.z, collider.bounds.max.z)
                );
            if (point != collider.ClosestPoint(point))
            {
                point = Getrp(collider);
            }
            return point;
        }

    }




    // Update is called once per frame
    void Update()
    {
        
    }
}
