using UnityEngine;

public class towerObs : MonoBehaviour
{

     public GameObject obstaclePrefab;

    public void SpawnObstacle()
    {



        int obstacleSpawnIndex = Random.Range(3, 8);
        Transform spawnPoint = transform.GetChild(obstacleSpawnIndex).transform;

        int ruinRotIndex = Random.Range(0, 11) * 30;

        int ruinsToSpawn = 5;
        for (int i = 0; i < ruinsToSpawn; i++)
        {

            Instantiate(obstaclePrefab, spawnPoint.position, Quaternion.Euler(0, ruinRotIndex, 0), transform);

        }


       // Instantiate(obstaclePrefab, spawnPoint.position, Quaternion.Euler(0, ruinRotIndex, 0), transform);
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
