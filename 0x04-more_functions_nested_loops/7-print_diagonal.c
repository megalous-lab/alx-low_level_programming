#include "main.h"

/**
 * print_diagonal - print diagonal line on the terminal
 * @n: the number of time \ should be printed
 */

void print_diagonal(int n)
{
	int bl, sp; /*backlash and space*/

	if (n > 0)
	{
		for (sp = 0; sp < n; sp++)
		{
			for (bl = 0; bl < sp; bl++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n > 0)
		_putchar('\n');
}
