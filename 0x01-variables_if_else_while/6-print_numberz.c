#include <stdio.h>

/**
 * main - prints all single digits of numbers of base 10 from
 * Do not use printf, puts or char variable type
 *
 * Return: Always 0
 */

int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar('0' + n);
}
putchar('\n');
return (0);
}

