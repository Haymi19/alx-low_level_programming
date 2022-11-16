#include "function_pointers.h"

/**
 * print_name - prints a name.
 *
 * @name : the input name.
 * @f: pointer to the function.
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	int i;

	if (name)
	{
		for (i = 0; i < name[i]; i++)
		{
			f(&name[i]);
		}
	}
	return ;
}
