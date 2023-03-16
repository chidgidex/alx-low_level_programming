#include <stdio.h>
#include "main.h"

/**
 * main - prints the names of the program
 * @gcc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
