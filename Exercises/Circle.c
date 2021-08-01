#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int radius = get_int("radius: ");
    
    float perimeter = 2*3.14*radius;
   printf("Perimeter of the Circle = %f inches\n", perimeter);
	
	float area = 3.14*radius*radius;
	printf("Area of the Circle = %f square inches\n", area);
}
