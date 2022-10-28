#include <stdio.h>
/**
 * main -Print all base 16 numbers
 *
 * Return: 0
 *
*/
int main(void)
{
	int i;
	char y;

	for (i = 0; i <= 16; i++)
	{
		if (i >= 0 && i <= 9)
		{
		putchar((i) + ('0'));
		}
		if (i >= 10 && i <= 16)
		{
			y = 'a';
			 y++; 
			putchar(y);
			}
	}
	putchar('\n');
	return (0);
}
