#include "main.h"

/**
 * Print_diagonal - Draw a diagonal line according to parameter
 * @n: The number of time to print diagonal lines
 * Return: empty
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	 else
	{
	int i, j;


	for (i = 0; i < n; i++)
	{
	for (j = 0; j < n; j++)
	{
	if (j == i)
	_putchar('\\');
	else if (j < i)
	_putchar(' ');
	}
	_putchar('\n');
	}
	}
}
