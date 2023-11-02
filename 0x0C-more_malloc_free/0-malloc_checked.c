#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc
 *    and exits if allocation fails.
 * @b: The number of bytes to allocate.
 *
 * This function allocates memory of size @b
 *    bytes using malloc. If malloc fails,
 * it terminates the program with a status value of 98.
 *
 * Return: A pointer to the allocated memory
 *  	or exits with status 98 on failure.
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
exit(98);
}

return (ptr);
}
