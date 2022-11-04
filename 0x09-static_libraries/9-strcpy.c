#include "main.h"
#include <string.h>

/**
 * *_strcpy - copy string pointed by src in to dest.
 *
 * @src: the string to be copied.
 * @dest: the string to be copied in to.
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);

		if  (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
