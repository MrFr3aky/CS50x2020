#include <cs50.h>
#include <stdio.h>

int main(void)
{   
    int n; // integer for height
    do     // do while loop for height value greater than equal to one or less than equal to 8
    {
        n = get_int("Height: "); 
    }
    while (n < 1 || n > 8);
    
    int w = n; // another variable for storing height value

    for (int i = 0; i < w; i++) // main for loop
    {
        for (int j = 1; j < n; j++)
        {
            printf(" "); //for space
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#"); //hashes
        }

        printf("  "); //more space

        for (int l = 0; l <= i; l++)
        {
            printf("#");
        }
        printf("\n"); //new line
        n--; // decrement of n
    }
    
}
