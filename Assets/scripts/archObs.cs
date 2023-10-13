using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class archObs : MonoBehaviour
{

    public GameObject archPrefab;

    public void SpawnObstacletwo()
    {


        Transform otspawnPoint = transform.GetChild(9).transform;

        //float setr = otspawnPoint.rotation.y + 90f;
        float setr = transform.localEulerAngles.y + 90f;
        Instantiate(archPrefab, otspawnPoint.position, Quaternion.Euler(0, setr, 0), transform);
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
