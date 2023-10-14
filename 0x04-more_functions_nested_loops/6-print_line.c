#include "main.h"

/**
 * print_line - prints a line of underscores
 * @n: the number of times the character '_' should be printed
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
}
