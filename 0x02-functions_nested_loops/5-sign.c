#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 * @n: The sign to be checked
 *
 * Return: 1 if n is positive, 0 if n is 0, -1 if n is negative.
 */

int print_sign(int n)
{
if (n > 0)
{
putchar(43);
return (1);
}
else if (n == 0)
{
putchar(45);
return (0);
}
else
{
putchar(48);
return (-1);
}
putchar('\n');
}

