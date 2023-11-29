#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *        Two numbers should be saparated by space
 *        Four numbers should be separated by , and space
 * Return: Always 0
 */

int main(void)
{
int num1;
int num2;
int num3;
int num4;

for (num1 = 0; num1 < 10; num1++)
{
for (num2 = num1 + 1; num2 < 10; num2++)
{
putchar('0' + num1);
putchar('0' + num2);

if (num1 != 9 || num2 != 8)
{
putchar(' ');
}
for (num3 = 0; num3 < 10; num3++)
{
for (num4 = num3 + 1; num4 < 10; num4++)
{
putchar('0' + num3);
putchar('0' + num4);
if (num3 != 9 || num4 != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

