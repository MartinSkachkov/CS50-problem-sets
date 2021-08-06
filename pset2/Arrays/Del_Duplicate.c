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
    
    printf("Enter %i elements in the array:\n", length);
    for (int i =0; i < length; i++)
    {
        scanf("%i", &arr[i]);
    }
    
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < length - 1; k++)
                {
                    arr[k] = arr[k+1];
                }
                length--;
                j--;
            }
        }
    }
    
    printf("Array elements after deleting duplicates : ");
    for (int i = 0; i < length; i++)
    {
        printf("%i, ", arr[i]);
    }
}
