#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -> sum of all the params
 * @n: no of params passed to the function
 * @...: variable no of params to calculate the sum
 * Return: If n == 0, return 0
 * Otherwise the sum of all the params
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
