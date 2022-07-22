#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: no of command line arg
 * @argv: Array
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int n;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (n = 0; *argv; n++, argv++)
			;

		printf("%d\n", n - 1);
	}

	return (0);
}
