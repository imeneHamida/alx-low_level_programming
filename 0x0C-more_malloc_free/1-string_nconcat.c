#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with a limit
 * on the second string.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated
 * string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1 = 0;
unsigned int len2 = 0;
unsigned int i;
unsigned int j;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;

while (s2[len2] != '\0')
len2++;

if (n >= len2)
n = len2;

result = malloc(len1 + n + 1);

if (result == NULL)
return (NULL);

for (i = 0; i < len1; i++)
result[i] = s1[i];

for (j = 0; j < n; j++)
result[i + j] = s2[j];

result[i + j] = '\0';

return (result);
}