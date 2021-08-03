#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int count_letters(string text)
{
    int letters = 0;
    
    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters++;
        }
    }
    return letters;
}

int count_words(string text)
{
    int words = 1;
    
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }
    
    return words;
}

int count_sentances(string text)
{
    int sentances = 0;
    
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentances++;
        }
    }
    return sentances;
}

int main(void)
{
    string text = get_string("Text: ");
    
    int letters = count_letters(text);
    //printf("%i letter(s)\n", letters);
    
    int words = count_words(text);
    //printf("%i word(s)\n", words);
    
    int sentances = count_sentances(text);
    //printf("%i sentance(s)\n", sentances);
    
    float grade = 0.0588 * (100 * (float) letters / (float) words) - 0.296 * (100 * (float) sentances / (float) words) - 15.8;
    
    if (grade < 16 && grade >= 0)
    {
        printf("Grade %i\n", (int) round(grade));
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }
    
}
