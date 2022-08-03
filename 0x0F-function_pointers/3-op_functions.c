#include "3-calc.h"

/**
 * op_add -> adds two numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -> substracts two numbers
 * @a: 1st no
 * @b: 2nd no
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -> multiplies two nos
 * @a: 1st no
 * @b: 2nd no
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -> divides two nos
 * @a: 1st no
 * @b: 2nd no
 * Return: division
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
 * op_mod -> calculates module of two numbers
 * @a: 1st no
 * @b: 2nd no
 * Return: remainder
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

