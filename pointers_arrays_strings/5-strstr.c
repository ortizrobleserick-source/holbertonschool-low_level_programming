#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to find
 *
 * Return: pointer to beginning of located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		i = 0;
		while (needle[i] != '\0' && haystack[i] == needle[i])
			i++;
		if (needle[i] == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
