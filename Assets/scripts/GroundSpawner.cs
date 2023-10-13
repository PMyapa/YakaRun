using UnityEngine;

public class GroundSpawner : MonoBehaviour
{
    public GameObject[] groundTile;
    public int tileindex =0;
    Vector3 nextSpawnPoint;

    [SerializeField] float otChance = 0.2f;
    [SerializeField] float orChance = 0.3f;
    [SerializeField] float turnChance = 0.15f;
    [SerializeField] float turnLChance = 0.5f;


    int tileTurnIndex = 1;
    int gTile = 0;
    float qr1 = 0;


    public void SpawnTile(bool spawnItems)
    {

        GameObject temp = Instantiate(groundTile[gTile], nextSpawnPoint, Quaternion.Euler(0, qr1, 0));
        gTile = 0;

        nextSpawnPoint = temp.transform.GetChild(tileTurnIndex).transform.position;
        tileindex = tileindex + 1;
        GameManager.inst.DisIncrease();


        temp.GetComponent<treeScript>().SpawnTrees();


        if (spawnItems)
        {
            



           
              
            temp.GetComponent<coinSpawn>().SpawnCoins();

          //  temp.GetComponent<GroundTile>().SpawnSpeedbuttons();

            float random = Random.Range(0f, 1f);
            if (random < otChance)
            {
                temp.GetComponent<archObs>().SpawnObstacletwo();
            }
            else if (random < orChance)
            {
                temp.GetComponent<rockobs>().SpawnObstaclethree();
            }
            else
            {
                // temp.GetComponent<GroundTile>().SpawnObstacle();
                temp.GetComponent<towerObs>().SpawnObstacle();
            }
        

              



            // random ground tile drections algorithom
            float randomt = Random.Range(0f, 1f);

            if (randomt < turnChance)
            {


                if (qr1 == 0)
                {
                    float randomc = Random.Range(0f, 1f);
                    if (randomc < turnLChance)
                    {
                        qr1 = 90;
                        gTile = 2;
                        return;

                    }
                    else if (randomc > turnLChance)
                    {
                        qr1 = -90;
                        gTile = 1;
                        return;
                    }
                    return;

                }
                if (qr1 == 90)
                {
                    qr1 = 0;
                    gTile = 1;
                    return;
                }
                if (qr1 == -90)
                {
                    qr1 = 0;
                    gTile = 2;
                    return;
                }


            }
            // random ground tile direction end

        }
        
    }


    // Start is called before the first frame update
    public void Start()
    {
        for (int i = 0; i < 15; i++)
        {
            if (i < 2)
            {
                SpawnTile(false);
            }
            else 
            {
                SpawnTile(true);
            }
        }



     

    }
}
