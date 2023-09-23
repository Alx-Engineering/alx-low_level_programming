#include "main.h"

/**
 * puts_half - Prints half of a string followed by a new line.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
int length = 0;
int i;

while (str[length])
length++;

if (length % 2 == 0)
i = length / 2;
else
i = (length - 1) / 2;

while (str[i])
{
_putchar(str[i]);
i++;
}

_putchar('\n');
}
