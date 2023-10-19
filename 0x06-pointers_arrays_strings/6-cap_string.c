#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The string to be modified.
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
char *ptr = str;
int capitalize = 1;

while (*ptr)
{
if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ','
|| *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' 
|| *ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' 
|| *ptr == '}')
{
capitalize = 1;
}
else if (*ptr >= 'a' && *ptr <= 'z' && capitalize)
{
*ptr -= 32;
capitalize = 0;
}
else
{
capitalize = 0;
}
        
ptr++;
}

return (str);
}
