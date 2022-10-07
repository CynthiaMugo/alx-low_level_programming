#include "main.h"
#include <string.h>

/**
 * _strncat -> append some characters
 * @dest: param1
 * @src: param2
 * @n: param3
 * Return: String
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
