#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
char *p = str;

while (*p)
{
_putchar(*p);
p += 2;
}

_putchar('\n');
}
