#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line
 */
void puts2(char *str)
{
	int i;
	char ch;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			ch = str[i];
			_putchar(ch);
		}
	}
	_putchar('\n');
}
