#include "main.h"

/**
 * *rot13 - Encodes
 * @s: The string to be encoded.
 *
 * Return: A string encoded using Leet.
 */

char *rot13(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        char c = s[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
            s[i] = (c - base + 13) % 26 + base;
        }

        i++;
    }

    return s;
}
