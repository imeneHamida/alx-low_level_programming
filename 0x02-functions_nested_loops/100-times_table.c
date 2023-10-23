#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The times table to be printed.
 *
 * Description: This function prints the times table for a given 'n'.
 * It will not print anything if 'n' is greater than 15 or less than 0.
 * The output is written using the _putchar function.
 */
void times_table(int n)
{
if (n < 0 || n > 15)
return;
int row;
int column;
int product;

for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
product = row * column;
if (column > 0)
{
_putchar(',');
_putchar(' ');
if (product < 10)
_putchar(' ');
}
if (product < 10)
_putchar(' ');
if (product < 100)
_putchar(' ');
if (product >= 100)
{
_putchar(product / 100 + '0');
product %= 100;
}
if (product >= 10)
{
_putchar(product / 10 + '0');
product %= 10;
}
_putchar(product + '0');
}
_putchar('\n');
}
}
