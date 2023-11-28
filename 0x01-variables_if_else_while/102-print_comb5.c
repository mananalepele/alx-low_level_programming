#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *        Two numbers should be saparated by space
 *        Four numbers should be separated by , and space
 * Return: Always 0
 */

int main(void)
{
int n;
int m;
int n1;
int m1;

for (n = 0; n < 10; n++)
{
for (m = n + 1; m < 10; m++)
{
putchar('0' + n);
putchar('0' + m);

if (n != 8 || m != 9)
{
putchar(' ');
for (n1 = 0; n1 < 10; n1++)
{
for (m1 = n1 + 1; m1 < 10; m1++)
{
putchar('0' + n1);
putchar('0' + m1);
if (n1 != 8 || m1 != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}

