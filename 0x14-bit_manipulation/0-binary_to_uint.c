#include <stddef.h>
#include "main.h"

/**
 * check_valid_string - checks if a string has only 0's and 1's
 * @b: string to be checked
 *
 * Return: 1 if string is valid, 0 otherwise
 */
int check_valid_string(const char *b)
{
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}

	return (1);
}
