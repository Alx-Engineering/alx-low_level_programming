#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to search in.
 * @needle: The substring to locate.
 *
 * Return: Pointer to the beginning of the located substring, or NULL if
 *         the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *h = haystack;
        char *n = needle;

        while (*n && *h == *n)
        {
            h++;
            n++;
        }

        if (*n == '\0')
            return (haystack);

        haystack++;
    }

    return (NULL);
}

int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
