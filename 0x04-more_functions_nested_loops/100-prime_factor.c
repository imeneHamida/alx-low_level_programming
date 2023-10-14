#include <stdio.h>
#include <math.h>

int main(void)
{
int number = 612852475;
int largestPrime = -1;
int i;
while (number % 2 == 0)
{
largestPrime = 2;
number /= 2;
}

for (i = 3; i <= sqrt(number); i += 2)
{
while (number % i == 0)
{
largestPrime = i;
number /= i;
}
}

if (number > 2)
{
largestPrime = number;
}

printf("%d\n", largestPrime);

return (0);
}
