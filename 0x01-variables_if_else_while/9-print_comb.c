#include <stdio.h>

/**
 *main -> prints all possible combinations of single-digit numbers
 *prints in ascending order
 *Return: 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{

putchar(ch);
if (ch != 57)
{
putchar(44);
putchar(32);
}
}

putchar(10);

return (0);
}
