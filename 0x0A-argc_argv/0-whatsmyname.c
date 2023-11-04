#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the arguments
 *
 * Description: This function prints the name of
 * the program, including its path.
 * The `argc` parameter is not used in this program,
 * and `argv[0]` contains the program name.
 *
 * Return: 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
