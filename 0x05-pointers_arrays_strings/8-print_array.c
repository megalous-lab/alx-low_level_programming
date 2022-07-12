#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: Array of integers to print
 * @n: Number of array integers to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	putchar('\n');
}
