#include <stdio.h>

/**
 * Prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, separated by commas and spaces.
 */
int main()
{
int n = 98;
int first = 1, second = 2, next;
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
