#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 success
 */int main(int argc, char *argv[])
{
        int change;
        int coins [] = {25, 10, 5, 2, 1};
        int num_of_coins = 0;
        int coin_count = 0;
        int i = 0;

        if (argc != 2)
        {
                printf("Error\n");
                return (1);
        }

        change = atoi(argv[1]);

        if (change < 0)
        {
                printf("0\n");
                return (0);
        }

        while (change > 0)
        {
                if (change >= coins[i])
                {
                        num_of_coins = change / coins[i];
                        coin_count += num_of_coins;
                        change %= coins[i];
                }
                i++;
        }
        printf("%d\n", coin_count);
        return (0);
}
