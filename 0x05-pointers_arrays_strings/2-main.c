#include "main.h"
#include <stdio.h>

/**
 * main - Check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *str = "My first strlen!";
int len;

len = _strlen(str);
printf("%d\n", len);
return (0);
}
