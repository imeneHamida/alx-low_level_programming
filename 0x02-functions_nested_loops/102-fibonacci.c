#include <stdio.h>

/**
 * Prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, separated by commas and spaces.
 */
int main(void)
{
int n = 50;
int first = 1;
int second = 2;
int next;
int i;

iprintf("%d, %d", first, second);

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
