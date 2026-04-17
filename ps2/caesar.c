#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>


int main(int argc, string argv[])

{
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1;
    }   

    for (int i=0; argv[1][i] != '\0'; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    string text = get_string("Plaintext: ");
    int length = strlen(text);
    char cypher[length + 1]; 
    int key = atoi(argv[1]);

    for(int i=0; i < (length); i++)
    {
        if((text[i] > 64) && (text[i] < 91))
        {
            cypher[i] = ((text[i] - 'A' + key) % 26) + 'A';
        }
        else if((text[i] > 91) && (text[i] < 123))
        {
            cypher[i] = ((text[i] - 'a' + key) % 26) + 'a';
        }
        else
        {
            cypher[i] = text[i];
        }
    }
    cypher[length] = '\0';
    printf("Ciphertext: %s\n", cypher);
}