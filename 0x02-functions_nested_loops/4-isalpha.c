#include "main.h"
/**
 * _isalpha - checks for alphabets
 * @c: the charcter to be checked
 *
 * Return: 1 if char is lower or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
