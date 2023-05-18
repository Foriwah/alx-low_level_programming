#include "main.h"

/**
 * string_nconcat - concatenate strings
 * @s1: first string
 * @s2: second string
 * @n: length determiner for s2
 * Return: Return pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int check, check1;
	int len, len1;
	int count = n;
	char *prt;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = 0;
	len1 = 0;
	while (s1[len] != '\0')
		len++;
	while  (s2[len1] != '\0')
		len1++;

	if (count >= len1)
	{
		count = len1;
		prt = malloc(sizeof(char) * (len + len1 + 1));
	}
	else
		prt = malloc(sizeof(char) * (n + len + 1));
	if (prt == NULL)
		return (NULL);
	for (check = 0; check < len; check++)
	{
		prt[check] = s1[check];
	}
	for (check1 = 0; check1 < count; check1++)
	{
		prt[check++] = s2[check1];
	}
	prt[check++] = '\0';
	return (prt);
}
