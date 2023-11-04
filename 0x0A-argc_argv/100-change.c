#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Description: This function calculates and prints the
 * minimum number of coins needed to make change
 * for a given amount of cents.
 * It checks the number of arguments, handles negative inputs,
 * and uses coin denominations of 25, 10, 5, 2, and 1 cent
 * to calculate the change.
 * If the number of arguments is not exactly 1, it prints "Error"
 * and returns 1. If the input is negative, it prints 0.
 *
 * Return: 0 (Success) if the minimum number of coins is calculated
 * and printed correctly, 1 (Error) for issues with the arguments.
 */
int main(int argc, char *argv[])
{
int cents;
int coins25;
int coins10;
int coins5;
int coins2;
int coins1;
int totalCoins;
if (argc != 2)
{
fprintf(stderr, "Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

coins25 = cents / 25;
cents = cents % 25;

coins10 = cents / 10;
cents = cents % 10;

coins5 = cents / 5;
cents = cents % 5;

coins2 = cents / 2;
cents = cents % 2;

coins1 = cents;

totalCoins = coins25 + coins10 + coins5 + coins2 + coins1;

printf("%d\n", totalCoins);

return (0);
}
