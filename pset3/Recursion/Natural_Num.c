#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printNaturalNumbers(int lowerLimit, int upperLimit)
{
    if (lowerLimit < upperLimit)
    {
        printf("%i,", lowerLimit);
        printNaturalNumbers(lowerLimit + 1, upperLimit);
    }
    else
    {
        return;
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

    printf("All natural numbers from %d to %d are: ", lowerLimit, upperLimit);
    printNaturalNumbers(lowerLimit, upperLimit);
}
