#include <stdio.h>
/**
 * main -Print base 10 numbers
 *
 * Return: 0
 *
*/
int main(void)
{
int i;

for (i = 0; i < 10; i++)
	{
putchar((i)+('0'));
putchar(',');
putchar(' ');
}
printf("\n");
return (0);
}
