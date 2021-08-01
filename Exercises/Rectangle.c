#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int height = get_int("height: ");
    int width = get_int("width: ");
    
    int perimeter = 2 * height + 2 * width;
    printf("Perimeter of the rectangle = %i\n", perimeter);
    
    int area = height * width;
    printf("Area of the rectangle = %i\n", area);
}
