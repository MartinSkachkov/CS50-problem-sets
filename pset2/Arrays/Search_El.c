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
    
    int toSearch;
    printf("Element to search is: ");
    scanf("%i", &toSearch);
    
    int index = -1;
    for (int i = 0; i < length; i++)
    {
        if(arr[i] == toSearch)
        {
            index = i;
            printf("Element found at index: %i\n", index);
            break;
        }
    }
    
    if (index == -1)
    {
        printf("Element %i not found\n", toSearch);
    }
}
