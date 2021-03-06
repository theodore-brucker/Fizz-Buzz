//=======================================================================
// Author:		Theodore Brucker
// Date:  		3/6/2021
// Language:	C
// Example:		Fizz Buzz Childrens Game
// File:   		FizzBuzz.c
//=======================================================================

#include <stdio.h>

int main()
{
    //Variables for true/false and a counter
    int fizz = 0, buzz = 0, i = 0;

    //Loop through positive integers up to 100
    for(i; i <= 100; i++)
    {
        if(i % 3 == 0)
        {
            fizz = 1;//Set fizz = true if i is multiple of 3
        }
        if(i % 5 == 0)
        {
            buzz = 1;//Set buzz = true if i is multiple of 5
        }

        
        if(fizz && buzz)
        {
            printf("FizzBuzz\n");//Print FizzBuzz if multiple of both
        }else if (fizz)
        {
            printf("Fizz\n");//Print Fizz if multiple of 3 and not 5
        }else if (buzz)
        {
            printf("Buzz\n");//Print Buzz if multiple of 5 and not 3
        }else
        {
            printf("%d\n", i);//Print i if multiple of neither
        }

        //Reset true/false values for next i value
        fizz = 0;
        buzz = 0;
    }
}