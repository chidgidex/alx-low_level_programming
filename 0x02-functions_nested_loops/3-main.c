#include "main.h"

/**
 * main - Check the code
 * Return: Always 0
 */

int main(void)
{
	int r;

	r = islower ('H');
	_putchar(r + '0');
	r = islower ('0');
	_putchar(r + '0');
	r = islower (100);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
