#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> prints the alphabet in lowercase
 * followed by a new line
 * Return ; always 0
 */
int main(void)
{
int ch;

srand(time(0));
n = rand() - RAND_MAX / 2;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
putchar("10"); /* this is an ascii code for new line*/

return (0);
}
