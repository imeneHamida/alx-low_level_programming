#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the correct
 * function to perform the operation.
 */
int (*get_op_func(char *s))(int, int)
{
int i;
op_t ops[] ={
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
i = 0;

while (ops[i].op)
{
if (*s == *ops[i].op && s[1] == '\0')
return (ops[i].f);
i++;
}

printf("Error\n");
exit(99);
}
