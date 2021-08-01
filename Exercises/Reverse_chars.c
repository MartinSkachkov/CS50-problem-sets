#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char letter1 = get_char("");   
    char letter2 = get_char("");
    char letter3 = get_char("");
    
    printf("The reverse of %c%c%c is %c%c%c\n",letter1, letter2, letter3
                                              ,letter3, letter2, letter1);
}
