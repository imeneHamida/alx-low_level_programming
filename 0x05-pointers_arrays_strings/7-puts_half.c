#include "main.h"
#include <unistd.h>

/**
 * puts_half - Prints the second half 
 *  or the last n characters of a string.
 * @str: Pointer to the string to be printed.
 */
void puts_half(char *str)
{
int length = 0;
int i;
while (str[length] != '\0')
{
length++;
}

if (length % 2 == 0)
{
for (i = length / 2; str[i] != '\0'; i++)
{
write(1, &str[i], 1);
}
}
else
{
int n = (length - 1) / 2;
for (i = n; str[i] != '\0'; i++)
{
write(1, &str[i], 1);
}
}

write(1, "\n", 1);
}
