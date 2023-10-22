#include <stdio.h>

/**
 * Calculates and prints the sum of all multiples
 * of 3 or 5 below a specified limit
 * @limit The upper limit for finding multiples
 * of 3 or 5 (excluded).
 */
int main()
{
int limit = 1024;
int sum = 0;

for (int i = 3; i < limit; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}

printf("The sum of all multiples of 3 or 5 below 1024 is: %d\n", sum);

return (0);
}
