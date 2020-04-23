#include <stdio.h>
#include <cs50.h>
#include <math.h> // math library for round function in the program

int main(void)
{
    float change; // float value for change
    do
    {
        change = get_float("Change owed: "); // getting the change value from the user
    }
    while (change < 0); //condition for while if its negative or alphabet it will run again

    int cents = round(change * 100); // converting float value using round from maths.h
    int coins = 0; //declaring variable coins for adding after each subtraction of the change 
    do      // do while condition for the problem
    {
        if (cents >= 25)  // value of change if greater than or equal to 25
        {  
            cents = cents - 25; // change will be substracted by 25 
            coins++; // coin will be added
        }
        else if (cents >= 10) // value of change if greater than or equal to 10
        {
            cents = cents - 10;
            coins++;
        }
        else if (cents >= 5) // value of change if greater than or equal to 5
        {
            cents = cents - 5;
            coins++;
        }
        else if (cents >= 1) // value of change if greater than or equal to 1
        {
            cents = cents - 1;
            coins++;
        }
        else if (cents == 1) // value of change equal to 1
        {
            cents = cents - 1;
            coins++;
        }
        else if (cents == 0) // value of change equal to 0
        {
            break;
        }

    }
    while (cents > 0);

    printf("%i\n", coins); 

}




    

