#include <stdio.h>

int main(void)
{
int limit = 4000000;
int first = 1;
int second = 2;
int  next;
int sum = 0;

while (second <= limit)
{
if (second % 2 == 0)
{
sum += second;
}

next = first + second;
first = second;
second = next;
}

printf("%d\n", sum);

return (0);
}
