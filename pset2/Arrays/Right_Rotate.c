#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rotateByOne(int arr[], int length)
{
    int lastEl = arr[length-1];
    
    for (int i = length-1; i > 0; i--)
    {
        arr[i] = arr[i-1]; //arr[9] = arr[8]
    }
    arr[0] = lastEl;
}

void printArr(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%i, ",arr[i]);
    }
}

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
    
    int n;
    printf("Input number of times to rotate:");
    scanf("%i", &n);
    
    printf("Array before rotation: ");
    printArr(arr, length);
    
    for (int i = 0; i < n; i++)
    {
        rotateByOne(arr, length);
    }
    
    printf("\nArray after rotation: ");
    printArr(arr, length);
    
}
