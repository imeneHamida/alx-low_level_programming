#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This function prints the name of the
 * source file from which it was compiled
 * and returns 0 to indicate successful execution.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
