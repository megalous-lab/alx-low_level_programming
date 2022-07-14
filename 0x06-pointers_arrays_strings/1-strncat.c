#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @src: string to append to dest
 * @dest: string to concatenate with src
 * @n: number of bytes to append
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	/* get the length of dest string */
	for (len = 0; dest[len] != 0; len++)
		;

	/* append src to dest one character at a time */
	for (i = 0; i < n; i++)
	{
		dest[len] = src[i];
		len++;
	}

	return (dest);
}
