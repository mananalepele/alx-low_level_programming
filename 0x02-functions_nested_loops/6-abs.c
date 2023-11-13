#include "main.h"
#include <stdlib.h>

/**
 * _abs - computes the absolute value of an integer
 * @n: The value to be passed to _abs
 *
 * Return: 0 otherwise -1 if there is an error
 */

int _abs(int n)
{
if (n < 0)
{
n = -n;
}
else
{
n = n;
}
return (n);
} 

