#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 * Return: 0 if the strings are equal,
 * a positive integer if s1 is greater,
 * or a negative integer if s2 is greater.
 */
int _strcmp(const char *s1, const char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}
