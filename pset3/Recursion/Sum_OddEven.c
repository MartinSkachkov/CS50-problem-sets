#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sumEvenOdd(int lower, int upper)
{
    if(lower > upper)
    {
        return 0;
    }
    else
    {
        return (lower + sumEvenOdd(lower + 2, upper));
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
    
    printf("sum: %i",sumEvenOdd(lower, upper));
}
