#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int length;
    
    printf("length of the array: ");
    scanf("%i",&length);
    
    int arr[length];
    
    for (int i = 0; i < length; i++)
    {
        printf("enter element [%i]: ", i);
        int element;
        scanf("%i",&element);
        arr[i] = element;
    }
    
    printf("original arr:");
    for (int i = 0; i < length; i++)
    {
        printf("%i", arr[i]);
    }
    
    printf("\nreversed arr:");
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%i",arr[i]);
    }
}
