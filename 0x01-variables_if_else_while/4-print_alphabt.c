#include <stdio.h>
/**
 * main -Proram that prints all small and capital letters
 *
 * Return: i
 *
*/
int main(void)
{
	char i;

for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for (i = 'A'; i <= 'Z'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
