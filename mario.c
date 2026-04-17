#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int i;
    int space;
    int hash;
    int n = get_int("how many rows do you want the pyramid to have? ");
    {
        if(n<0)
        {
            do
            {
                n = get_int("how many rows do you want the pyramid to have? ");
            }
            while(n<0);
        }

        if(n>0)
        {
            for(i=0; i<n; i++)
            {
                // space
                for(space=(n - (i + 1)); space>0; space--)
                {
                    printf(" ");
                }

                // hashes
                for(hash=0; hash<(i + 1); hash++)
                {
                    printf("#");
                }
                printf("\n");
            }
        }
    }
}