#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: variable that contains what to be counted
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;

	return (i);
}
