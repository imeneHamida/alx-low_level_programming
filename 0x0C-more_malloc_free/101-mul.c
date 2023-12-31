#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * is_positive_number - Checks if a string consists of positive digits.
 * @str: The string to be checked.
 *
 * Return: 1 if the string consists of positive digits, 0 otherwise.
 */
int is_positive_number(const char *str)
{
while (*str)
{
if (!isdigit(*str))
return (0);
str++;
}
return (1);
}

int _putchar(char c)
{
return write(1, &c, 1);
}

void print_number(long num)
{
if (num < 0)
{
_putchar('-');
num = -num;
}

if (num / 10)
print_number(num / 10);

_putchar(num % 10 + '0');
}

int main(int argc, char *argv[])
{
char *num1;
char *num2;
long result;

if (argc != 3)
{
write(1, "Error\n", 6);
return 98;
}

num1 = argv[1];
num2 = argv[2];

if (!is_positive_number(num1) || !is_positive_number(num2))
{
write(1, "Error\n", 6);
return 98;
}

result = atol(num1) * atol(num2);
print_number(result);
_putchar('\n');

return (0);
}
