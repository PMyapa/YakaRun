using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class coinSpawn : MonoBehaviour
{

    public GameObject coinBox;

        
    public void SpawnCoins()
    {
        // if (transform.name == "GroundTile(Clone)")
         //{
            float setr = transform.localEulerAngles.y;

            Transform cbspawnPoint = transform.GetChild(9).transform;
            Instantiate(coinBox, cbspawnPoint.position, Quaternion.Euler(0, setr, 0), transform);





        /*int coinsToSpawn = 2;
            for (int i = 0; i < coinsToSpawn; i++)
            {
                GameObject temp = Instantiate(coinPrefab, transform);
                temp.transform.position = Getrp(GetComponent<Collider>());
            }

            Vector3 Getrp(Collider collider)
            {
                Vector3 point = new Vector3
                    (Random.Range(-1.4f, 1.4f),
                    Random.Range(0.2f, 1.6f),
                    Random.Range(collider.bounds.min.z, collider.bounds.max.z)
                    );
                if (point != collider.ClosestPoint(point))
                {
                    point = Getrp(collider);
                }
                return point;
            }*/
         //}
    }
    


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
