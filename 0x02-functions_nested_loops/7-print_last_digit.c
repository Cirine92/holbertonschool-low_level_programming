#include "holberton.h"
/**
 *print_last_digit - prints the last digit of a number
 *@n: integer that returns the last digit
 *Return: res
 */
int print_last_digit(int n)
{
int x;
if (n < 0)
n = -n;
x = n % 10;
_putchar(x + '0');
return (x);
}
