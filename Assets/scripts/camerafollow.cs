using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class camerafollow : MonoBehaviour
{
    public Transform targetObject;
    public Vector3 cameraOffset;
    public Transform LookTarget;
    [SerializeField] float Camangle ;
    [SerializeField] float CamHeight ;
    // Start is called before the first frame update
    private void Start()
    {
       // cameraOffset = transform.position - targetObject.position;
    }

    // Update is called once per frame
    private void FixedUpdate()
    {
        Vector3 targetpos = targetObject.position ;
        // targetpos.x = 0;
        targetpos.y = CamHeight;

       
        Vector3 spos = Vector3.Lerp(transform.position, targetpos, 5f * Time.deltaTime);
        transform.position = spos;
        

        var targetAngle = targetObject.eulerAngles.y; 
        var currentAngle = Mathf.LerpAngle(transform.eulerAngles.y, targetAngle, 5f* Time.deltaTime);


        transform.rotation = Quaternion.Euler(Camangle, currentAngle, 0);

       // transform.LookAt(LookTarget.position);

        /* Quaternion Or = targetObject.rotation;
         Or.x = 27;
         Or.z = 0;
         transform.rotation =Or;*/ 
    }
}
