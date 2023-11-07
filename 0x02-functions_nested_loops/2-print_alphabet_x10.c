#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabets in lowercases 10 times
 */

void print_alphabet_x10(void)
{
char alphabet;
int i;

for (i = 0; i <= 9; i++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
}
}

