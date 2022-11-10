#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: number of bytes
 * Return: pointer string
 */

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);

	return (str);
}
