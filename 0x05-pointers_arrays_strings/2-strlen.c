#include<stdio.h>

/**
 * _strlen - Returns the lenght of a string.
 * @str: The string to get the lenght of
 * Return: The lnght of @str.
 */
size_t _strlen(const char *str)

{
	size_t lenght = 0;

	while (*str++)
	lenght++;
	return (lenght);
}
