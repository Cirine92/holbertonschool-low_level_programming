#include "holberton.h"
/**
 * jack_bauer - function
 *
 */
void jack_bauer(void)
{
for (i = 00; i <= 23; i++)
{
for (j = 00; j <= 59; j++)
{
_putchar(i / 10);
_putchar(i % 10);
_putchar(':');
_putchar(j / 10);
_putchar(j % 10);
_putchar('\n');
}
}
}
