#include "main.h"

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 * Return: A pointer to the result (r),
 *  or 0 if the result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, sum, index = 0;
int i;

while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;

if (len1 + 1 > size_r || len2 + 1 > size_r)
return (0);

len1--;
len2--;

while (len1 >= 0 || len2 >= 0 || carry)
{
sum = carry;

if (len1 >= 0)
sum += n1[len1] - '0';
if (len2 >= 0)
sum += n2[len2] - '0';
carry = sum / 10;
r[index] = (sum % 10) + '0';

len1--;
len2--;
index++;
}

r[index] = '\0';

for (i = 0, j = index - 1; i < j; i++, j--)
{
char temp = r[i];
r[i] = r[j];
r[j] = temp;
}

return (r);
}
