#include "main.h"
/**
 * print_sign - checks for a
 * @c: takes in an integer
 * Return: 1 if positive, -1 if negative, /if not a digit.
 */
int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}

else if (n == 0)
{
	_putchar('0');
	return (0);
}

else if (n < 0)
{
_putchar('-');
return (-1);
}

else
{
_putchar('-');
return ('-1');
}
}
