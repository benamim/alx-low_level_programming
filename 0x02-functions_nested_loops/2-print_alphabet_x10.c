#include "main.h"

/**
 * main - check the code.
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
int i;
char c;

for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'Z'; c++)
_putchar(c);
_putchar('\n');
}
}
