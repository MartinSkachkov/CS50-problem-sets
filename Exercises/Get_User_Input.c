#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *name = get_string("What's your name? ");   
    char *birth = get_string("What's your birth date? ");
    char *number = get_string("Telephone number: ");
    
    printf("Name   : %s\n", name);
    printf("DOB    : %s\n", birth);
    printf("Mobile : %s\n", number);
}
