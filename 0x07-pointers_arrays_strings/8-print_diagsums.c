#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -This prints the sum of the two diagonals of a square matrix.
 * @a: A pointer to the first element of the matrix.
 * @size: the size of the matrix.
 */

void print_diagsums(int *a, int size);
{
    int i, j, sum1 = 0, sum2 = 0;
    {
    for (i = 0; i < size; i++)
    
	    sum1 += *(a + (i * size) + i);

	    sum2 += *(a + (i * size) + (size - 1 - i));
    }
    printf("Sum of diagonal 1: %d\n", sum1);
    printf("Sum of diagonal 2: %d\n", sum2);
}
