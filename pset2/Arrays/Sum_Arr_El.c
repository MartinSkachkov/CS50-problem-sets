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
    int sum = 0;
    
    printf("Enter %i elements in the array: ", length);

    for (int i = 0; i < length; i++)
    {
        scanf("%i", &arr[i]);
        sum += arr[i];
    }
    printf("%i\n", sum);
}
