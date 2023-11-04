#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
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
