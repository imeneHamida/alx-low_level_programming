#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i <= 7; i++)
{
int j;
for (j = i + 1; j <= 8; j++)
{
int k;
for (k = j + 1; k <= 9; k++)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);
if (i != 7 || j != 8 || k != 9) 
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');

return (0);
}
