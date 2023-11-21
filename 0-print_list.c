#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

		while (h != NULL)
    		{
        		unsigned int len = h->len;
        		unsigned int temp = len;
        		int digits = 0;

        		while (temp > 0)
        		{
            			temp /= 10;
            			digits++;
        		}

        		while (digits > 0)
        		{
            			_putchar('0' + len / power(10, digits - 1));
            			len %= power(10, digits - 1);
            			digits--;
        		}

        		_putchar(']');

        		if (h->str != NULL)
        		{
            			while (*h->str != '\0')
            			{
                			_putchar(*h->str);
                			h->str++;
            			}
        		}
        		else
        		{
            			_putchar('(');
            			_putchar('n');
            			_putchar('i');
            			_putchar('l');
            			_putchar(')');
        		}

        		_putchar('\n');

        		h = h->next;
       	 		node_count++;
    		}

	return (node_count);
}

/**
 * power - Calculates the power of a number.
 * @base: The base.
 * @exponent: The exponent.
 * Return: The result of base raised to the power of exponent.
 */
int power(int base, int exponent)
{
	int result = 1;

    	while (exponent > 0)
    	{
        	result *= base;
        	exponent--;
    	}

    	return result;
}
