#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes.
 *
 * Return: pointer of an array of chars
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strout;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	strout = malloc(sizeof(char) * (i + j + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		strout[k] = s1[k];

	n = j;
	for (j = 0; j <= n; k++, j++)
		strout[k] = s2[j];

	return (strout);
}
