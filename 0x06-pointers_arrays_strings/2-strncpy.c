#include "main.h"

/**
 * _strncpy - Copies a string up to
 * n characters from src to dest.
 * @dest: The destination string.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to copy from src.
 * Return: A pointer to the resulting string (dest).
 */
char *_strncpy(char *dest, const char *src, int n)
{
char *result = dest;

while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

while (n > 0)
{
*dest = '\0';
dest++;
n--;
}

return (result);
}
