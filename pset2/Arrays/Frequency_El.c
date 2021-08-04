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
    int freq[length];

    printf("Enter %i elements in the array: ", length);
    for (int i =0; i < length; i++)
    {
        scanf("%i", &arr[i]);
        freq[i] = -1;
    }

    for (int i = 0; i < length; i++)
    {
        int count = 1;

        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    for (int i = 0; i < length; i++)
    {
        if(freq[i] != 0)
        {
            printf("%i occurs %i times\n", arr[i], freq[i]);
        }
    }
}
