#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value to start the array.
 * @max: The maximum value to end the array.
 *
 * Return: A pointer to the newly created array or NULL on failure.
 */
int *array_range(int min, int max)
{
int *arr;
int size, i;

if (min > max)
return (NULL);

size = max - min + 1;

arr = malloc(size * sizeof(int));

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
arr[i] = min;
min++;
}

return (arr);
}
