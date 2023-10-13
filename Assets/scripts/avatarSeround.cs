using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class avatarSeround : MonoBehaviour
{
    [SerializeField] float turnSpeedas = 5f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(0, turnSpeedas, 0 * Time.deltaTime);
    }
}
