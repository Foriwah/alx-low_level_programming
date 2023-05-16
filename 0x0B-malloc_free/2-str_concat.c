#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate
 * @s1: a string variable
 * @s2: another string variable
 * Return: Return the string
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, len = 0, len1 = 0;

	while (s1 && s1[len])
		len++;
	while (s2 && s2[len1])
		len1++;

	s3 = malloc(sizeof(char) * (len + len1 + 1));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	j = 0;

	if (s1)
	{
		while (i < len)
		{
			s3[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (len + len1))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';
	return (s3);
}
