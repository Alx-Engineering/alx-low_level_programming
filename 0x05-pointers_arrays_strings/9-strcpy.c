#include "main.h"

/**
 * _strcpy - Copies a string to a buffer.
 * @dest: The buffer to copy to.
 * @src: The string to copy.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i])
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';
return (dest);
}
