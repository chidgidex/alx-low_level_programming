#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = islower('H');
    _putchar(r + '0');
    r = islower('o');
    _putchar(r + '0');
    r = islower(100);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
