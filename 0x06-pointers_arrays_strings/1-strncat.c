#include "main.h"

/**
 * _strncat - Concatenates two strings with
 * a maximum of n bytes from src.
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The maximum number of bytes to append from src.
 * Return: A pointer to the resulting string (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
char *result = dest;

while (*dest)
{
dest++;
}

while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (result);
}
