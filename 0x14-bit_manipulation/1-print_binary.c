#include "main.h"

/**
 * print_binary - a function that prints the binary
 * representation of a number.
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int x, c = 0;
	unsigned long int current;

	for (x = 63; x >= 0; x--)
	{
		current = n >> x;

		if (current & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}

