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
    
    int num;
    printf("Input element to insert: ");
    scanf("%i", &num);
    
    int pos;
    printf("Input position where to insert: ");
    scanf("%i", &pos);
    
    for (int i = length; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = num;
    length++;
    
    printf("new arr: ");
    for (int i = 0; i < length; i++)
    {
        printf("%i, ", arr[i]);
    }
