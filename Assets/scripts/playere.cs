using UnityEngine;
using UnityEngine.SceneManagement;

public class playere : MonoBehaviour
{
    [SerializeField] bool pc;

    public bool alive = true;
    public bool startg = false;
    public bool jumpi = false;
    public bool slidei = false;

    public float speed = 4;
    public float speedb ;
    public float[] chaspeed;

    public float moveSpeed = 10;
    public float playeryrotation = 0;
    public Rigidbody rb;
    public CapsuleCollider ccd;


    float horizontalInput;
    float verticalInput;
    public float horizontalMultiplier = 1;


    [SerializeField] float jumpForce = 400f;
    [SerializeField] LayerMask groundMask ;
    [SerializeField] float slideForce = 20f;



    private Vector2 fingerDownPositoin;
    private Vector2 fingerUpPosition;

  

    [SerializeField]
    private float minDistanceForSwipe = 10f;

    public float tochIndex;
    public float turnIndex = 0;

    public float groundf;
    public float startDistance = 3.01f;



    public GameObject gManager;


    public AudioClip gameOver;
    public AudioSource PlayerAudio;


    Animator animator;




    public void Start()
    {
        turnIndex = 0;

        float chaIndex = PlayerPrefs.GetFloat("cha");
        float numberofchas = 4;

        for (int i = 0; i < numberofchas; i++)
        {
            if (i == chaIndex)
            {
                speedb = chaspeed[i];
                
            }

        }
    }




    public void FixedUpdate()
    {


        
        if (!alive) return;

      

        float hinput = horizontalInput;
        // modify the variable to keep y within minY to maxY
        hinput =
           Mathf.Clamp(hinput, -0.6f, 0.6f);
        // and now set the transform position to our modified vector
        horizontalInput = hinput;

        animator = GetComponent<Animator>();
        animator.SetFloat("height", rb.transform.position.y);

        if (speed < 5)
        {
            speed = speed + Time.deltaTime * 4 / 60;
        }
        else if (speed < 7)
        {
            speed = speed + Time.deltaTime * 3 / 60;
        }
        else if (speed < 10)
        {
            speed = speed + Time.deltaTime * 2 / 60;
        }
        else if (speed < 15)
        {
            speed = speed + Time.deltaTime * 1 / 60;
        }



        Vector3 forwardMove = transform.forward * speed *speedb* Time.fixedDeltaTime;
        Vector3 horizontalMove = transform.right * horizontalInput * speed * Time.fixedDeltaTime * horizontalMultiplier;


        animator.SetFloat("height", rb.transform.position.y);
        animator.SetFloat("cHeight", ccd.height);



            

        

        Jump();
        Slide();


       

        // turn keboard input
        //*************************************************************
        if (pc &&  turnIndex == 0)
        {
            if (Input.GetKeyDown(KeyCode.Period))
            {
                turnIndex = 1;
                Invoke("resetTurnIndex", 1);
            }
            if (Input.GetKeyDown(KeyCode.Comma))
            {
                turnIndex = 2;
                Invoke("resetTurnIndex", 1);
            }
        } 


        
         //*****************************************************************



        


        if (!startg) return;
        rb.MovePosition(rb.position + forwardMove + horizontalMove);
        rb.transform.rotation = Quaternion.Euler(0, playeryrotation , 0);

        




    }

    public void btnc()
    { 
      startg = true;

      animator.SetBool("isplay", true);

        playeryrotation = 0;

       



    }


    // Update is called once per frame
    private void Update()
    {

        foreach (Touch touch in Input.touches)
        {
            if (touch.phase == TouchPhase.Began)
            {
                fingerUpPosition = touch.position;
                fingerDownPositoin = touch.position;

            }

            if (touch.phase == TouchPhase.Moved)
            {
                fingerDownPositoin = touch.position;
                

            }

            if (touch.phase == TouchPhase.Ended)
            {
                fingerDownPositoin = touch.position;
                DetectSwipe();

            }


        }


        horizontalInput = Input.acceleration.x * moveSpeed;

        //*******************************************************
        if (pc)
        {
            horizontalInput = Input.GetAxis("Horizontal");
            verticalInput = Input.GetAxis("Vertical");
        }

                
       //*********************************************************


        if (tochIndex == 0 && !startg)
            groundf = rb.transform.position.y + 0.05f;


        if (pc)
        {
            if (Input.GetKeyDown(KeyCode.W))
            {
                jumpi = true;
            }
            if (Input.GetKeyDown(KeyCode.S))
            {
                slidei = true;
            }
            
        }

    }
    //end of update()


  

    public void Die()
    {
        alive = false;
        PlayerAudio.PlayOneShot(gameOver);
        animator.SetBool("isplay", false);
        Invoke ("Restart", 0.7f);
        GameManager gameManager = gManager.GetComponent<GameManager>();
        gameManager.FinalScore();

    }

    public void Restart()
    {
        
        SceneManager.LoadScene("gameover");
    }

    void Jump()
    {
        
         float heightj = GetComponent<Collider>().bounds.size.y;
        bool isGrounded = Physics.Raycast(transform.position, Vector3.down,  0.1f, groundMask);


        
        if (startg == true && isGrounded && jumpi )
        {
            rb.AddForce(Vector3.up * jumpForce ) ;

            jumpi = false;


        }

        

        
    }





    void Slide()
    {

        

        if (startg == true && slidei)
        {
            Vector3 cccenter = ccd.center;

                

                cccenter.y = 0.27f;

                ccd.center = cccenter;

                ccd.height = 0.56f;
                ccd.radius = 0.23f;


                rb.AddForce(Vector3.down * slideForce);


            Invoke("resetCapsuleCollider", 1);


        }

        slidei = false;
    }


     public void resetCapsuleCollider()
    {

        Vector3 cccenter = ccd.center;
        cccenter.y = 0.4868001f;
        ccd.center = cccenter;




        ccd.height = 0.9925897f;
        ccd.radius = 0.3219668f;
        
    }





  



    public void turnr()
    {
        if (turnIndex == 1)
        {
            playeryrotation += 90;
            turnIndex = 3;
        }
      
    }

    public void turnl()
    {
       
        if (turnIndex == 2)
        {
            playeryrotation -= 90;
            turnIndex = 3;
        }
    }

    public void resetTurnIndex()
    {
       turnIndex = 0;
    }



  



    private void DetectSwipe()
    {
        if (SwipeDistanceCheckMet())
        {
            if (IsVerticalSwipe() )
            {
                var direction = fingerDownPositoin.y - fingerUpPosition.y ;


                if (direction > 0)
                {

                    jumpi = true;


                }
                else if (direction < 0)
                {
                    slidei = true;
                }
                else
                {
                    tochIndex = 0;
                }



               
            }
            else
            {
                var direction = fingerDownPositoin.x - fingerUpPosition.x ;

                if (direction > 0 && turnIndex == 0)
                {

                    turnIndex = 1;
                    Invoke("resetTurnIndex", 1);
                   


                }
                else if (direction < 0 && turnIndex == 0)
                {
                    turnIndex = 2;
                    Invoke("resetTurnIndex", 1);
                }
                




            }
            fingerUpPosition = fingerDownPositoin;
        }
    }

    private bool IsVerticalSwipe()
    {
        return VerticalMovementDistance() > HorizontalMovementDistance();
    }

    private bool SwipeDistanceCheckMet()
    {
        return VerticalMovementDistance() > minDistanceForSwipe || HorizontalMovementDistance() > minDistanceForSwipe;
    }

    private float VerticalMovementDistance()
    {
        return Mathf.Abs(fingerDownPositoin.y - fingerUpPosition.y);
    }

    private float HorizontalMovementDistance()
    {
        return Mathf.Abs(fingerDownPositoin.x - fingerUpPosition.x);
    }


  






}
