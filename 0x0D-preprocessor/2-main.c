#include <stdio.h>

/**
 * printFileName - Prints the name of the
 * source file from which it was compiled.
 */
void printFileName(void)
{
printf("%s\n", __FILE__);
}

int main(void)
{
printFileName();
return (0);
}
