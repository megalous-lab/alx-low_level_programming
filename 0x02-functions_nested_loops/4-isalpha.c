#include "main.h"

/**
 * _isalpha - check if we have an alphabet
 * @c: character to check
 * Return: 1 if c is an alphabet, otherwise Return: 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
