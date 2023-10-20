#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to be encoded.
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
char rotMap[256] = {0};
char *ptr = str;
int i;

for (i = 'A'; i <= 'Z'; i++)
{
rotMap[i] = i + 13;
}
for (i = 'a'; i <= 'z'; i++)
{
rotMap[i] = i + 13;
}
while (*ptr)
{
if (rotMap[(unsigned char)*ptr])
{
*ptr = rotMap[(unsigned char)*ptr];
}
ptr++;
}

return (str);
}
