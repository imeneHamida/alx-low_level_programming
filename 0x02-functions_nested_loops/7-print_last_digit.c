#include "main.h"

/**
 * print_last_digit - prints the last digit of a number and returns it
 * @n: the number to extract the last digit from
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;

if (n < 0)
{
last_digit = -1 * (n % 10);
}
else
{
last_digit = n % 10;
}

_putchar('0' + last_digit);

return (last_digit);
}
