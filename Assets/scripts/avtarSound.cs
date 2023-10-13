using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class avtarSound : MonoBehaviour
{

    public AudioClip avatarsf;
    public AudioSource avatarAS;

    public void avatarsfx()
    {
        avatarAS.PlayOneShot(avatarsf, 0.5F);

    }
}
