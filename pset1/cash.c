#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int coin = 0;
    float change;
    
    do
    {
        change = get_float("Change owed: $");
    }
    while (change < 0);
    
    int cent = round(change * 100); //0.45 --> 45
    
    while (cent >= 25) //45 >= 25
    {
        cent -= 25; //20
        coin++; //1
    }
    
    while (cent >= 10) //20 >= 10
    {
        cent -= 10; //10
        coin++; //2
    }
    
    while (cent >= 5)
    {
        cent -= 5;
        coin++;
    }
    
    while(cent >= 1)
    {
        cent -= 1;
        coin++;
    }
    
    printf("%i\n", coin);
}
