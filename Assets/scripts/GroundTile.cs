using UnityEngine;

public class GroundTile : MonoBehaviour
{

    GroundSpawner groundSpawner;
    // Start is called before the first frame update
    private void Start()
    {
        groundSpawner = GameObject.FindObjectOfType<GroundSpawner>();
    }


    private void OnTriggerExit(Collider other)
    {
        groundSpawner.SpawnTile(true);
        Destroy(gameObject, 2);
    }

    // Update is called once per frame
    private void Update()
    {

    }

 /*  public GameObject obstaclePrefab;

    public void SpawnObstacle()
    {



        int obstacleSpawnIndex = Random.Range(5, 10);
        Transform spawnPoint = transform.GetChild(obstacleSpawnIndex).transform;

        int ruinRotIndex = Random.Range(0, 11) * 30;

        int ruinsToSpawn = 5;
        for (int i = 0; i < ruinsToSpawn; i++)
        {

            Instantiate(obstaclePrefab, spawnPoint.position, Quaternion.Euler(0, ruinRotIndex, 0), transform);

        }


       // Instantiate(obstaclePrefab, spawnPoint.position, Quaternion.Euler(0, ruinRotIndex, 0), transform);
    }



    public GameObject archPrefab;

    public void SpawnObstacletwo()
    {

       
        Transform otspawnPoint = transform.GetChild(11).transform;

        //float setr = otspawnPoint.rotation.y + 90f;
        float setr = transform.localEulerAngles.y + 90f;
        Instantiate(archPrefab, otspawnPoint.position, Quaternion.Euler(0, setr, 0),transform);
    }






    public GameObject coinPrefab;


    public void SpawnCoins()
    {
        int coinsToSpawn = 10;
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
        }
    }

    public GameObject suPrefab;
    public GameObject sdPrefab;
    public GameObject mtPrefab;
    [SerializeField] float sdchance = 0.2f;
    [SerializeField] float suchance = 0.4f;

    public void SpawnSpeedbuttons()
     {
        GameObject buttonToSpawn = mtPrefab;
        float random = Random.Range(0f, 1f);
        if (random < sdchance) 
        {
            buttonToSpawn = sdPrefab;
        }
        else if (random < suchance) 
        {
            buttonToSpawn = suPrefab;
        }



        GameObject temp = Instantiate(buttonToSpawn, transform);
            temp.transform.position = Getrp1(GetComponent<Collider>());
        
        Vector3 Getrp1(Collider collider)
        {
            Vector3 point = new Vector3
                (Random.Range(-1.4f, 1.4f),
                Random.Range(0.2f, 1.6f),
                Random.Range(collider.bounds.min.z, collider.bounds.max.z)
                );
            if (point != collider.ClosestPoint(point))
            {
                point = Getrp1(collider);
            }
            point.y = 0.5f;
            return point;
           
        }
    }
   
*/
}
