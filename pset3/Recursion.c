#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int power(int base, int expo)
{
    if (expo == 0)
    {
        return 1;
    }
    else
    {
        return base * power(base, expo - 1);
    }
}

int main(void)
{ //x^y
    int x; //base
    scanf("%i", &x);
    
    int y; //expo
    scanf("%i", &y);
    
    int result = power(x, y);
    
    printf("result: %i\n", result);
}
