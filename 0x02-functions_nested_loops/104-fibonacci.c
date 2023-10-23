#include <stdio.h>

/**
 * A program to print the first 98 Fibonacci numbers.
 * @n Number of Fibonacci numbers to print.
 */
int main(void)
{
int n = 98;
int first = 1;
int second = 2;
int next;
int i;

printf("%d, %d", first, second);

for (i = 3; i <= n; i++)
{
next = first + second;
printf(", %d", next);
first = second;
second = next;
}

printf("\n");

return (0);
}
