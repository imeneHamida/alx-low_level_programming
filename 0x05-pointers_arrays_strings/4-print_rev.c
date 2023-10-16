#include "main.h"
#include <unistd.h>

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 */
void print_rev(char *s)
{
int length = 0;

while (*s)
{
length++;
s++;
}

    s--;

while (length > 0)
{
write(1, s, 1);
s--;
length--;
}

write(1, "\n", 1);
}
