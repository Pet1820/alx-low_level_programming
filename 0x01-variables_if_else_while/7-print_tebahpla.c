#include <stdio.h>
/**
 * main -Print a to z in reverse
 *
 * Return: 0
 *
*/
int main(void)
{
	int counter;

	for (counter = 'z'; counter >= 'a'; counter--)
	{
		putchar(counter);
	}
	putchar('\n');
	return (0);
}
