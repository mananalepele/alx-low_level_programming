#include <stdio.h>

/**
 * main - prints all combinations os single digit  numbers
 * Numbers are separated by , and  space
 * Return: Always 0
 */

int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
if (n > 0)
{
putchar(',');
putchar(' ');
}
putchar('0' + n);
}
putchar('\n');
return (0);
}

