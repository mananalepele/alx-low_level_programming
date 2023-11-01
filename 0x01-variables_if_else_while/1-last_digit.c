#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
char string1[] = "Last digit of";
int n, x;
char string2[] = "is";

srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;

if (n > 5)
{
printf("%s %d %s %d and is greater than 5\n", string1, n, string2, x);
}
else if (n <= 5)
{
printf("%s %d %s %d and is 0\n", string1, n, string2, x);
}
else if (n < 6 && n != 0)
{
printf("%s %d %s %d and is less than 6 and not 0\n", string1, n, string2, x);
}
return (0);
}

