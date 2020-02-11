#include "holberton.h"
/**
 *print_sign - display the sign
 *@n: integer that returns the sign of a number
 *Return: 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
