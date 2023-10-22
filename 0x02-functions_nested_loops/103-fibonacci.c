#include <stdio.h>

/**
 * Calculates and prints the sum of even-valued
 * terms in the Fibonacci sequence
 * up to a limit of 4,000,000.
 */
int main()
{
long long prev = 1, current = 2, next, sum = 0;

while (current <= 4000000)
{
if (current % 2 == 0)
{
sum += current;
}

next = prev + current;
prev = current;
current = next;
}

printf("%lld\n", sum);

return (0);
}
