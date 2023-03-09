/*
 * file: 0-puts_recursion.c
 * Auth: Gid
 */

#include "main.h"

/**
 * _put_recursion - Print a string, folloed by a new line.
 * @s: The string to be printed./
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
