#include <stdio.h>

/**
 * print_alphabet - prints the alphabet, in lowercase
 */

void print_alphabet(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
putchar('\n');
}

