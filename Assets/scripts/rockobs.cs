using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rockobs : MonoBehaviour
{
    public GameObject rockobsPrefab;



    public void SpawnObstaclethree()
    {


        Transform otspawnPoint = transform.GetChild(9).transform;

        //float setr = otspawnPoint.rotation.y + 90f;
        float rockobsangel = Random.Range(0, 2) == 0 ? -90 : 90;
        float setr = transform.localEulerAngles.y + rockobsangel;
        Instantiate( rockobsPrefab , otspawnPoint.position, Quaternion.Euler(0, setr, 0), transform);
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
