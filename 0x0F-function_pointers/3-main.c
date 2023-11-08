#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
int num1;
int num2;
int result;
char *operator;
int (*operation)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = argv[2];


operation = get_op_func(operator);

result = operation(num1, num2);

printf("%d\n", result);

return (0);
}
