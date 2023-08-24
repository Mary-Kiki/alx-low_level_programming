/**
 * *string_toupper - To upper
 *
 * @str: string to be checked
 *
 * Return: str.
 */

#include "main.h"
#include <ctype.h>

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		i++;
	}

	return (str);
}

