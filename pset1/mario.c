/*
    CS50
    pset1
    mario.c "Pyramid Problem"
    Author: Sonya Corcoran, sonyacorcoran@gmail.com
*/

#include <cs50.h>
#include <stdio.h>

// prototype
int main(void)
{
    int pyramid_height = 0;
    // User input
    do {
        printf("Enter Height:");
        pyramid_height = Getpyramid_heightpyramid_heightInt();
        if (pyramid_height == 0)
        {
        return 0;
        }
    }
     
    while (pyramid_height < 1 || pyramid_height > 23);
    
    for (int i = 0; i < pyramid_height; i++)
    {   
        // print whitespace
        for(int j = 0; j < pyramid_height-i-1; j++)
        {
            printf("%s", " ");
        }
        // print hashes
        {
            for(int k = 0; k < i+2; k++)
            {
                printf("#");
            }
            printf("\n");
            
        }
    }
}
