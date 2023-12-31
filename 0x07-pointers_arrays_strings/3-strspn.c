#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s which
 *         consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int match;

    while (*s)
    {
        match = 0;
        while (*accept)
        {
            if (*s == *accept)
            {
                count++;
                match = 1;
                break;
            }
            accept++;
        }
        if (match == 0)
            break;
        s++;
    }

    return (count);
}

int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
