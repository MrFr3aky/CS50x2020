// CS50x 2020 ADARSH SINGH 

#include <stdio.h>
#include <cs50.h>

int main(void)
{   
    long card; // long data type variable for details of card
    do
    {
        card = get_long("Number: ");
    
    }
    while (card < 13);  // condition for do while loop until required value is entered
    int rem = 0;   
    int sum1 = 0;
    long temp = card;  // storing card value into temp variable for checking
    long temp2 = card; // storing card value into temp variable for checking
    int t = 0;
    int l = 0; 
    int r = 0;

    do                   // do while loop for adding the sum of digits that weren't multiplied by 2
    {
        rem = temp % 10;
        
        temp = temp / 100;
        
        sum1 = sum1 + rem;
    }
    while (temp != 0);

    rem = 0;
    int sum2 = 0;

    temp2 = temp2 / 10;
    do                   // do while loop for adding the sum of digits that were multiplied by 2
    {   
        rem = temp2 % 10;
        
        temp2 = temp2 / 100;

        rem = rem * 2;

        if (rem > 9)        // condition for adding products' digits 
        {
            l = rem / 10;
            r = rem % 10;

            rem = l + r;
            sum2 = sum2 + rem;
        }
        
        else
        {
            sum2 = sum2 + rem;
        }
    }
    while (temp2 != 0);

    int count = 0;

    long check = card;     // another variable for storing card value for checking the card

    r = 0;
    t = sum1 + sum2;      // adding the sum of the digits which were calculated before 
    r = t % 10;

    if (r == 0) // checking condition for the last digit of the sum if card is legit or not ( last digit = 0)
    {

        do      // do while loop for counting the number of digits in the card
        {
            if (card > 0)
            {
                count++;
            }
            card = card / 10;

        }
        while (card != 0);

    



        if (count == 15)        // condition for AMEX CARD
        {
            if (check / 10000000000000 == 34)
            {
                printf("AMEX\n");
            }
            else if (check / 10000000000000 == 37)
            {
                printf("AMEX\n");
            } 
            else 
            {   
                printf("INVALID\n");
            }   

        }

        else if (count == 16)   // condition for MASTERCARD

        {     
            if (check / 100000000000000 == 51)
            {
                printf("MASTERCARD\n");
            }
            else if (check / 100000000000000 == 52)
            {
                printf("MASTERCARD\n");
            }
            else if (check / 100000000000000 == 53)
            {
                printf("MASTERCARD\n");
            }
            else if (check / 100000000000000 == 54)
            {
                printf("MASTERCARD\n");
            }
            else if (check / 100000000000000 == 55)
            {
                printf("MASTERCARD\n");
            } 
            else if (check / 1000000000000000 == 4)
            {
                printf("VISA\n");
            }    
            else
            {
                printf("INVALID\n");
            }       
        
        }
        else if (count == 13)       // condition for VISA CARD
        {
            if (check / 10000000000000 == 4)
            {
                printf("VISA\n");
            }

            else 
            { 
                printf("INVALID\n");
            }
        }
        else 
        {
            printf("INVALID\n");
        }

    }

    else 
    {
        printf("INVALID\n");
    }

}

