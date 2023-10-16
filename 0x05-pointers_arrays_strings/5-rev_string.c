#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
char *start = s;
char *end = s;
char temp;

while (*end)
end++;

if (end > s)
end--;

while (start < end)
{
temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
