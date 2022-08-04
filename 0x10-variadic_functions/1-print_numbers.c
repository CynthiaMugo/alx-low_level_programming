#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -> prints numbers, followed by a new line.
 * @separator: string to be printed btwn nos
 * @n: the no of integers passed to the function
 * @...: a variable no of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);
	if (n != 0)
	{
		for (index = 0; (index < n - 1); i++)
		{
			if (separator != NULL)
			{
				printf("%d%s", va_arg(nums, int), separator);
			}
			else
			{
				printf("%d", va_arg(nums, int));
			}
		}
		printf("%d", va_arg(nums, int));
		va_end(nums);
	}

	printf("\n");
}
