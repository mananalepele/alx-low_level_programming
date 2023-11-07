#include <stdio.h>

/**
 * main - prints the alphabet, in lowercase
 *
 * Return: Always 0
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

