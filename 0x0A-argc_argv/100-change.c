#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins needed to make change
 * @argc: count of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 if successful, 1 if an error occurs
 */
int get_minimum_coins(int cents)
{
int coins[] = {25, 10, 5, 2, 1};
int num_coins = sizeof(coins) / sizeof(coins[0]);
int count = 0;
int i;

if (cents <= 0)
{
return 0;
}

for (i = 0; i < num_coins; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
count++;
}
}

return count;
}

/**
 * main - prints the minimum number of coins needed to make change
 * @argc: count of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 if successful, 1 if an error occurs
 */
int main(int argc, char *argv[])
{
int cents;
int min_coins;

if (argc != 2)
{
printf("Error\n");
return 1;
}

cents = atoi(argv[1]);
min_coins = get_minimum_coins(cents);

printf("%d\n", min_coins);

return 0;
}
