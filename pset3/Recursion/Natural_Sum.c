#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sumNaturalNum(int lower, int upper)
{
    if(lower == upper)
    {
        return lower;
    }
    else
    {
        return lower + sumNaturalNum(lower + 1, upper);
    }
}

int main(void)
{
    int lower;
    printf("lower limit: ");
    scanf("%i", &lower);
    
    int upper;
    printf("upper limit: ");
    scanf("%i", &upper);
    
    printf("%i",sumNaturalNum(lower, upper));
}
