#include "main.h"
#include <string.h>

/**
 * *cap_string - changes all words in to uppercase.
 *
 * @s: the input string.
 *
 * Return: the pointer to dest.
 */
char *cap_string(char *s)
{
        int counter = 0, i;

	int sep_words[] = {9, 32, 33, 44, 46, 59, 40, 41, 63, 123, 125};

	if ((*(s + counter) >= 97) && (*(s + counter) <= 122))
		*(s + counter) = *(s + counter) - 32;
	counter++;

	while (*(s + counter) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + counter) == sep_words[i])
			{
				if ((*(s + (counter + 1)) >= 97) && (*(s + (counter + 1)) <= 122))
					*(s + (counter + 1)) = *(s + (counter + 1)) - 32;
				break;
			}
		}

                counter++;
        }
        return (s);
}

