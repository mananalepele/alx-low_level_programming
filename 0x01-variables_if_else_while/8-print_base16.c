#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
int n;
char alphabet;

for (n = 0; n < 10; n++)
{
putchar('0' + n);
}
for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}

