#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r =__isalpha('H');
    _putchar(r + '0');
    r = __isalpha('o');
    _putchar(r + '0');
    r = __isalpha(108);
    _putchar(r + '0');
    r = __isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
