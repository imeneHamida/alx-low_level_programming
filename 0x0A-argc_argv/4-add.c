#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the arguments
 * Description: This function calculates the sum
 * of positive numbers provided as command-line arguments.
 * If no arguments are given, it prints "0." If there are
 * non-positive numbers or other issues with arguments,
 * it prints "Error" and returns 1.
 *
 * Return: 0 (Success) if the sum is calculated and printed
 * correctly, 1 (Error) if there are issues with arguments.
 */
int main(int argc, char *argv[])
{
int i;
int sum;
if (argc < 2)
{
printf("0\n");
return (0);
}

sum = 0;

for (i = 1; i < argc; i++)
{
int number = atoi(argv[i]);

if (number <= 0)
{
fprintf(stderr, "Error\n");
return (1);
}

sum += number;
}

printf("%d\n", sum);
return (0);
}
