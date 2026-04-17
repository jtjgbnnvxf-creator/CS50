#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)

{
    string text = get_string("What's your text? ");
    int sentences = 0;
    int words = 1;
    int letters = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++; 
        }

        if (text[i] == ' ')
        {
            words++;
        }

        if (isalpha(text[i]))
        {
            letters++;
        }
    }

    float s = (((float) sentences / words) * 100);
    float l = (((float) letters / words) * 100);
    float index = (0.0588 * l - 0.296 * s - 15.8);

    if (index < 16 && index > 1)
    {
        for (int i = 1; i < 17; i++)
        {
            if (index >= i && index < (i + 1))
            {
                printf("Grade %i\n", i);
            }
        }
    }

    if (index >= 16)
    {
        printf("Grade 16+\n");
    }

    if (index < 1)
    {
        printf("Before grade 1\n");
    }
}

   

    
