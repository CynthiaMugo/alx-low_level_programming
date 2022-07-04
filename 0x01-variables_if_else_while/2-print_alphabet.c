#include <stdio.h>

/**
 *main -> prints the alphabet in lowercase
 *followed by a new line
 *Return:0 (Success)
 */
int main(void)
{
int ch;

for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
putchar(10); /* this is an ascii code for new line*/

return (0);
}
