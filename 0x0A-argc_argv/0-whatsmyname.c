#include <stdio.h>

/**
 * main -> function to print its name
 * @argc: argc param
 * @argv: array of a commnd listed
 * Return: 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
