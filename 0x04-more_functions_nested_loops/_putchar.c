#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: if successful 1 or else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
