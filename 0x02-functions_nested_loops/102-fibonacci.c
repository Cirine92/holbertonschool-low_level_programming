#include <stdio.h>
/**
 * main - function
 * Return: 0 (Success)
 */
int main(void)
{
long i, fib, f1 = 1, f2 = 2;
for (i = 0; i < 49; i++)
{
printf("%ld, ", f1);
fib = f1 + f2;
f1 = f2;
f2 = fib;
}
printf("%ld", f1);
printf("\n");
return (0);
}
