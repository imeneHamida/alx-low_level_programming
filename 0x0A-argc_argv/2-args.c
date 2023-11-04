#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the arguments
 * Description: This function prints each of the
 * command-line arguments, including the program name.
 * The `argv` parameter is marked as unused because
 * it is not used within the program's logic.
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
