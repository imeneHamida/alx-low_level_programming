#include "main.h"

/**
 * leet - Encodes a string into "1337".
 * @str: The string to be encoded.
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
char leetMap[256] = {0};
char *ptr = str;
int i;

for (i = 0; i < 256; i++)
{
leetMap[i] = i;
}
leetMap['a'] = leetMap['A'] = '4';
leetMap['e'] = leetMap['E'] = '3';
leetMap['o'] = leetMap['O'] = '0';
leetMap['t'] = leetMap['T'] = '7';
leetMap['l'] = leetMap['L'] = '1';

while (*ptr)
{
*ptr = leetMap[(unsigned char)*ptr];
ptr++;
}

return (str);
}
