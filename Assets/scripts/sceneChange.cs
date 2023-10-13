using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class sceneChange : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void loadlevel(string level)
    {
        SceneManager.LoadScene(level);

    }

    public void exitbutton()
    {
        Application.Quit();
    }

}
