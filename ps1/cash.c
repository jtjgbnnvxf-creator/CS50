#include <stdio.h>
#include <cs50.h>

int main(void)

    {
        int given=(get_int("how much cash were you given? "));
        int price=(get_int("how much was the total? "));
        int change=(given - price);
        int coins=0; 

        printf("change owed: %i\n", change);

        {
            if(change<1)
            {
                do
                {
                    given=(get_int("how much cash were you given? "));
                    price=(get_int("how much was the total? "));
                    change=(given - price);
                }
                while(change<1);
            }
        }

        {
            if(change>1)
            {
                while (change>0)
                {
                    if (change >= 25)
                    {
                        change -= 25;
                        coins++;
                    }
                    else if (change >= 10)
                    {
                        change -= 10;
                        coins++;
                    }
                    else if (change >= 5)
                    {
                        change -= 5;
                        coins++;
                    }
                    else
                    {
                        change -= 1;
                        coins++;
                    }
                }
            }
            printf("minimum coins: %i\n", coins);
        }
    }
         
    