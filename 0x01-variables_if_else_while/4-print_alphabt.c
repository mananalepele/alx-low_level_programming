#include <stdio.h>

/**
 * main - prints all letters except qand e
 *
 * Return: Always zero
 */

int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
if (alphabet != 'e' && alphabet != 'q')
putchar(alphabet);
}
putchar('\n');

return (0);
}

