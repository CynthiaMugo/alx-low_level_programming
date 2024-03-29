#include "main.h"

/**
 * flip_bits -> counts the no. of bits to flip
 * to get from one number to another.
 * @n: 1st no.
 * @m: 2nd no.
 * Return: no of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
