#include "main.h"

/**
*_strpbrk - Searches a string
*for any set of bytes
*@s: String to be searched
*@accept: string to be searched in
*s1 string
*Return: returns a character
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
			break;
		}
	}
			else
			
				return ('\0');
}
return (0);
}
