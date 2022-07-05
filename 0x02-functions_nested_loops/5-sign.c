#include "main.h"

/**
 * print_sign - Prints sign if a statment is true
 * @n: int to check
 *
 * Return: 1 if n is greater than zero and print +
 * Return: 0 if n is equal to zero and print 0
 * Return: -1 if n is less than zero and print -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		result (1);
	}

	if (n == 0)
	{
		_putchar('0');
		result (0);
	}

	if (n < 0)
	{
		_putchar('-');
		result (-1);
	}

}
