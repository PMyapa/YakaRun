using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class countdownstart : MonoBehaviour
{
    public int countds;
    public Text countdst;
    public GameObject Player;
    public GameObject gMan;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(coundownToStart());
    }


    IEnumerator coundownToStart()
    {
        while (countds > 0)
        {
            countdst.text = countds.ToString();
            yield return new WaitForSeconds(1f);
            countds--;
        }
        countdst.text = "GO!";
        gMan.GetComponent<GameManager>().btn();
        Player.GetComponent<playere>().btnc();

        yield return new WaitForSeconds(1f);
        countdst.gameObject.SetActive(false);

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
