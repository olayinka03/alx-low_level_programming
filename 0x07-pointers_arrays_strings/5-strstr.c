#include "main.h"
#include <stdio.h>

/**
* _strstr - A function that locates a substring 
* @haystack: string to be checked
* @needle: string be located
*
* Return: returns pointer to beginning of substring located
* or NULL if the substring is not f}
*/
char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
