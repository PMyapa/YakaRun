using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class version : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        string version = Application.version ;
        Text vertext = gameObject.GetComponent<Text>();
        vertext.text = "V " + version;

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
