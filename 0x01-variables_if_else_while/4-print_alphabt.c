#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)

{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; aplhabet++)
{
if (alphabet == 'q')
continue;

else if (alphabet == 'e')
continue;

puchar(alphabet);
}

putchar('\n');

return (0);

}
