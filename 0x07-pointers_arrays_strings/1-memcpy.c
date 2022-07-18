#include "main.h"

/**
 * _memcpy -> copies memory area
 * @src: source memory
 * @dest: destination memory
 * @n: bytes to be copied
 * Return: string copied from source
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
