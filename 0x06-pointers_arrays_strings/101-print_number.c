#include "main.h"

void _putchar(char c);

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 *
 * Return: void
 */

void print_number(int n)

{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}

	if ((x / 10) > 0)
		print_number(x / 10);

	_putchar((x % 10) + '0');
}

