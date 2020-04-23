#include <cs50.h>
#include <stdio.h>


int main(void)
{   
    int n; // declaration of integer n
    do     // do while loop for getting the height between 1 and 8
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    int w = n; // declaring and storing height value into another variable for loop 
    for (int i = 0; i < w; i++) // main loop for the pattern
    {
        for (int j = 1; j < n; j++)
        {
            printf(" ");    // space
        } 
        for (int k = 0; k <= i; k++)
        {
            printf("#");    // hash
        }
        printf("\n");
        n--;        // decrementing n
    }
}     
                
