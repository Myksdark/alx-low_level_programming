#include "main.h"
#include <stdlib.h>
/**
 * array_range - get the len, malloc * len
 * loops size of len to insert min++ into new arr
 * @min: min input
 * @max: max input
 * Return: pointer to new array of ints
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
	return (0);

	len = max - min + 1;

	arr = malloc(sizeof(int) * len);

	if (arr == 0)
	return (0);

	for (i = 0; i < len; i++)
	arr[i] = min++;

	return (arr);
}
