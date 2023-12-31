#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Description: This function multiplies two numbers
 * provided as command-line arguments and prints the result.
 * If the correct number of arguments (3) is provided,
 * it performs the multiplication and prints the result.
 * If the number of arguments is not as expected,
 * it prints "Error" and returns 1.
 *
 * Return: 0 (Success) if the multiplication is successful,
 * 1 (Error) if there are incorrect arguments.
 */
int main(int argc, char *argv[])
{
int num1;
int num2;
int result;
if (argc == 3)
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
return (0);
}
else
{
printf("Error\n");
return(1);
}
}
