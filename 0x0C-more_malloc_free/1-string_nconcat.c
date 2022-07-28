#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -> concatenates two strings using at most an
 * inputed number of bytes
 * @s1: string 1
 * @s2: string 2
 * @n: max no of bytes of s2to concancate to s1
 * Return: function fails - NULL
 * otherwise, a pointer to the concancated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index++;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
		return (NULL);
	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}
