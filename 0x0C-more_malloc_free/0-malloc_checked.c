#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked -> allocates memory using malloc
 * @b: no of bytes to be allocated
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
