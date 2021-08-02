#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void caesarCode(string plainText, int key)
{
    printf("ciphertext: ");
    
for (int i = 0; plainText[i] != '\0'; i++)
{
    if (isalpha(plainText[i]) != 0) // ako ne sa text vrushta 0 zatova tqbva da e != 0;
    {
        if (isupper(plainText[i]))
        {
            printf("%c", ((plainText[i] - 'A' + key) % 26) + 'A');
        }
        else
        {
            printf("%c", ((plainText[i] - 'a' + key) % 26) + 'a');
        }
    }        
    else
    {
        printf("%c", plainText[i]);
    }
}
printf("\n");
}

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (isalpha(argv[1][i]) != 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
int key = atoi(argv[1]);
    
    string plainText = get_string("Enter text to encrypt: ");
    caesarCode(plainText, key);
}
