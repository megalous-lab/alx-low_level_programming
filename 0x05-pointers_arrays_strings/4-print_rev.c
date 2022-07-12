#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * followed by a newline
 * @s: string to print
 */
void print_rev(char *s)
{
	int i;
	char ch;

	for (i = 0; s[i] != 0; i++)
		;
	for (i = i - 1; i >= 0; i--)
	{
		ch = s[i];
		_putchar(ch);
	}
	_putchar('\n');
}
