#include <stdio.h>
#include "main.h"

/**
 * main - prints the names of the program
 * @gcc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc _attribute_((unused)), char *argv[1])
{
	printf("%s\n", *argv);

	return (0);
}
