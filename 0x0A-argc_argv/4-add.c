#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 on success,and 1 on error
 */
int main(int argc, char *argv[])
{
int i, j, add = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
add += atoi(argv[i]);
}
printf("%d\n", add);
return (0);
}
