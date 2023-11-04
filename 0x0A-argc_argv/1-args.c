#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the arguments
 * Description: This function calculates the
 * total number of command-line arguments, excluding
 * the program name.
 * The `argv` parameter is marked as unused because
 * it is not used in this program.
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
int totalnumber;
totalnumber = argc - 1;
printf("%d\n", totalnumber);
return (0);
}
