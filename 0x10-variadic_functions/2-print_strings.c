#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -> prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n:  number of strings passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int s;
	char *clone;

	va_start(nums, n);

	for (s = 0; s < n; s++)
	{
		clone = va_arg(nums, char*);
		if (clone != NULL)
			printf("%s", clone);
		else
			printf("%p", clone);
		if (separator != NULL && s < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
