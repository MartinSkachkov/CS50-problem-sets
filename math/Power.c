#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int power (int base, int exponent) // base^exponent = result
{
    int x = base; //2
    int y = exponent; //3
    int result = 1;
    
    for (int i = 0; i < exponent; i++) //0<3, 1<3, 2<3
    {
        result *= base; // 2 * 2 * 2
    }
    
    return result;
}

int main(void)
{
    printf("Base: ");
    int x;
    scanf("%i", &x);
    
    printf("Exponent: ");
    int y;
    scanf("%i", &y);
    
    printf("Result %i^%i = %i\n",x , y, power(x, y));
}