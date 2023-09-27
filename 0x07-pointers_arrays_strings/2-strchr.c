#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string.
 * @s: String to search in.
 * @c: Character to locate.
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
    while (*s)
    {
        if (*s == c)
            return (s);
        s++;
    }

    return (NULL);
}

int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
