#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int length;
    
    printf("arr length: ");
    scanf("%i", &length);
    
    int arr[length];
    
    printf("Enter %i elements in the array: ", length);
    for (int i =0; i < length; i++)
    {
        scanf("%i", &arr[i]);
    }
   
    int pos;
    printf("Input position where to delete: ");
    scanf("%i", &pos);
    
    if (pos < 0 || pos > length)
    {
        printf("Invalid position\n");
    }
    else
    {
       for (int i = pos - 1; i < length - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
        length--; 
    }
    
    printf("new arr: ");
    for (int i = 0; i < length; i++)
    {
        printf("%i, ", arr[i]);
    }
}
