#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
int length = 0;

while (*s)
{
length++;
s++;
}

while (length > 0)
{
s--;
_putchar(*s);
length--;
}

_putchar('\n');
}
