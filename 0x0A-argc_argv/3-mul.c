#include "main.h"
#include <stdio.h>

/**
 * Main- multiplies two numbers.
 * argv- array of arguements.
 * argc- count if arguements.
 * Return- on succes 0, and 1 on error
 */
int multiply(int a, int b)
{
    return a * b;
}

int main(int argc, char *argv[])
{
    int a, b, product;

    if (argc != 3)
    {
printf("Error\n");
return (1);
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);
    product = a * b;

    printf("%d\n", product);
    return (0);
}
