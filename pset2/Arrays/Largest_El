#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    int length;
    
    printf("arr length: ");
    scanf("%i", &length);
    
    int arr[length];
    int max1, max2 = INT_MIN;
    
    printf("Enter %i elements in the array: ", length);

    for (int i = 0; i < length; i++)
    {
        scanf("%i", &arr[i]);
    }
    
    for (int i = 0; i < length; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
    printf("First largest: %i\n", max1);
    printf("Second largest: %i\n", max2);
}
