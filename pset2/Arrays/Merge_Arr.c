#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void)
{ 
    
    int size1;
    printf("size of arr1:");
    scanf("%i", &size1);
    int arr1[size1];
    
    printf("enter elements of arr1:\n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%i\n", &arr1[i]);
    }
    
    int size2;
    printf("size of arr2:");
    scanf("%i", &size2);
    int arr2[size2];
    
    printf("enter elements of arr2:\n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%i\n", &arr2[i]);
    }
    
    int mergeSize = size1 + size2;
    int mergeArr[mergeSize];
    
    int index1 = 0;
    int index2 = 0;
    
    for (int mergeIndex = 0; mergeIndex < mergeSize;mergeIndex++)
    {
          if(index1 >= size1 || index2 >= size2)
        {
            break;
        }
        
        if (arr1[index1] < arr2[index2])
        {
            mergeArr[mergeIndex] = arr1[index1];
            index1++;
        }
        else
        {
            mergeArr[mergeIndex] = arr2[index2];
            index2++;
        }
    }
    
    printf("Array merged in ascending order : ");
    for (int i=0; i < mergeSize; i++)
    {
        printf("%i, ", mergeArr[i]);
    }
    
}
