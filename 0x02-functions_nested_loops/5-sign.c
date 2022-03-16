#include "main.h"
/**
 * print_sign - checks for a
 * @c: takes in a character
 * return: 1 if positive, -1 if negative, / otherwise 0
 */
int print_sign(int n)
{
	if (n>0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('-');
	return (-1);
}
else
{
	_putchar('-');
	return (-1);
}
}
