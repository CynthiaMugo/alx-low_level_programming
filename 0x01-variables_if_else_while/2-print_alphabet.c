#include <stdlib.h>
#include <time.h>

/**
 * main -> prints the alphabet in lowercase
 * followed by a new line
 * Return ; always 0
 */
int main(void)
{
int ch;

for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
putchar("10"); /* this is an ascii code for new line*/

return (0);
}
