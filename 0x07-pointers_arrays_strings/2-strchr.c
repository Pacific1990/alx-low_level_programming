#include "main.h"
/**
 * _strchr -locates a char
 * @s: string
 * @c: char to search
 * Return: pointer to the first
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
