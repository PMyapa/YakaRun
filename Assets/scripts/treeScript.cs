using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class treeScript : MonoBehaviour
{
    public GameObject tree;

    public void SpawnTrees()
    {



        //int treeSpawnIndex = Random.Range(3, 8);
        int treeSpawnIndexl = 11;
        int treeSpawnIndexr = 10;
        Transform spawnPointl = transform.GetChild(treeSpawnIndexl).transform;
        Transform spawnPointr = transform.GetChild(treeSpawnIndexr).transform;

        int ruinRotIndex = Random.Range(0, 11) * 30;

        /* int ruinsToSpawn = 5;
         for (int i = 0; i < ruinsToSpawn; i++)
         {

             Instantiate(obstaclePrefab, spawnPoint.position, Quaternion.Euler(0, ruinRotIndex, 0), transform);

         }*/

        Instantiate(tree , spawnPointl.position, Quaternion.Euler(0, ruinRotIndex, 0), transform);
        Instantiate(tree, spawnPointr.position, Quaternion.Euler(0, ruinRotIndex, 0), transform);
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
