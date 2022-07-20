#include <unistd.h>

/**
 * _putchar -> writes the c character to stdout
 * @c: character to print
 * Return: Onn success 1
 * On error - -1 is returned and error is set approprately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
