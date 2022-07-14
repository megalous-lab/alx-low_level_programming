#include "main.h"

/**
 * *_strncat - concatenates two strings
 * but uses, at most, n bytes from src, and src does not need to be
 * null-terminated if it contains n or more bytes
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

	/* return concatenated string */
	return (dest);
}
