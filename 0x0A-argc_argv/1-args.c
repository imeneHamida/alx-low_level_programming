#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the arguments
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
int totalnumber;
totalnumber = argc - 1;
printf("%d\n", totalnumber);
return (0);
}
