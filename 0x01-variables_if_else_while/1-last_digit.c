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
int n;
char string2[] = "is";

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 5)
{
printf("%s %d %s and is greater than 5\n", string1, n, string2);
}
else if (n == 5)
{
printf("%s %d %s and is 0\n", string1, n, string2);
}
else if (n != 0 && n < 6)
{
printf("%s %d %s and is less than 6 and not 0\n", string1, n, string2);
}
return (0);
}

