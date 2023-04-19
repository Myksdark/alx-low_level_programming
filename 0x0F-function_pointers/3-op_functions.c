#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - the struct op
 * @a: operator
 * @b: Function associated
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Struct op
 *
 * @a: The operator
 * @b: The function associated
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - the struct op
 *
 * @a: The operator
 * @b: The function associated
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Struct op
 * @a: Operator
 * @b: the function associated
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Struct op
 * @a: The operator
 * @b: The function associated
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a % b);
}
