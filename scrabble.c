#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)

{
    int scores[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    string player1 = get_string("What's your word? ");
    string player2 = get_string("What's your word? ");

    int length1 = strlen(player1);
    int length2 = strlen(player2);

    int score1;
    int score2;
    char a;
    char b;

    if(player1[1] >= 97)
    {
        for (int i=0; i<length1; i++)
        {
            a = toupper(player1[i]);
            int index1 = (a - 'A');
            score1 += scores[index1]; 
        }
    }
    else
    {
        for (int i=0; i<length1; i++)
        {
            int index1 = (player1[i] - 'A');
            score1 += scores[index1]; 
        }
    }

    if (player2[1] >= 97)
    {
        for (int j=0; j<length2; j++)
        {
            b = toupper(player2[j]);
            int index2 = (b - 'A');
            score2 += scores[index2]; 
        }
    }
    else
    {
        for (int j=0; j<length2; j++)
        {
            int index2 = (player2[j] - 'A');
            score2 += scores[index2]; 
        }
    }

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    if (score1 == score2)
    {
        printf("It's a tie!\n");
    }
}




