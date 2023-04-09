#include "main.h"
#include <stdio.h>

/**
 * Main- multiplies two numbers.
 * argv- array of arguements.
 * argc- count if arguements.
 * Return- on succes 0, and 1 on error
 */
int main(int argc, char *argv[])
{
    int num1, num2, product;

    if (argc != 3)
    {
        printf("2 3 6\n");
        return (1);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    product = num1 * num2;

    printf("%d\n", product);

    return (0);
}
