#include "main.h"
#include <stdio.h>

/**
 * main - Check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *src = "Hello, Holberton!";
char dest[50];

_strcpy(dest, src);
printf("Destination string: %s\n", dest);
return (0);
}
