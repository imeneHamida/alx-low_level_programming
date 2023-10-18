#include "main.h"

/**
 * times_table - Print a multiplication
 * table up to a specified limit.
 * @limit: The limit for the multiplication table.
 */
void times_table(int limit)
{
int i;
int j;
for (i = 0; i <= limit; i++)
{
for (j = 0; j <= 9; j++)
{
int result = i * j;

if (j != 0)
{
_putchar(',');
_putchar(' ');
if (result < 10)
{
_putchar(' ');
}
if (result >= 10)
{
_putchar((result / 10) + '0');
}
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
