#include <stdio.h>
#include <stdlib.h>

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
return 0;
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
