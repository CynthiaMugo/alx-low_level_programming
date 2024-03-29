#include "function_pointers.h"

/**
 * array_iterator -> executes a function given
 * as a param on each element of an array
 * @array: input integer array
 * @action: pointer to the function
 * @size: size of the array
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
