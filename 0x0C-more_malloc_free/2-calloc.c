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
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size + nmemb);
	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
