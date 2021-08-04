#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printEvenOdd(int cur, int limit)
{
    if (cur > limit)
    {
        return;
    }
    else
    {
        printf("%i, ",cur);
        printEvenOdd(cur+2, limit);
    }
}

int main(void)
{ 
    int lowerLimit, upperLimit;

    /* Input lower and upper limit from user */    
    printf("Enter lower limit: ");
    scanf("%i", &lowerLimit);
    
    printf("Enter upper limit: ");
    scanf("%i", &upperLimit);

    printf("Even/Odd numbers from %d to %d are: ", lowerLimit, upperLimit);
    printEvenOdd(lowerLimit, upperLimit);
}
