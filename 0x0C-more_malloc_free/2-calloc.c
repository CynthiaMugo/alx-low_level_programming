#include "main.h"
#include <stdlib.h>

/**
 * _calloc -> allocates memory for an array of a certain no of
 * elements each of an inputedbyte size
 * @nmemb: no of elements
 * @size: byte size of each array element
 * Return: nmemb = 0, size = 0or the function fails -> NULL
 * otherwise, a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
		memory[i] = 0;

	return (memory);
}
