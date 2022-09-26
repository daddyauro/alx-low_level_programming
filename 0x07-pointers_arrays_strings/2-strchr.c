#include "main.h"
#define NULL 0
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: The string to be searched
 * @c: The character to be located
 *  Return: If c is found - a pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] !=c)
		i++;
	if (s[i] ==c)
		return (&s[i]);
	else
		return (NULL);
}
