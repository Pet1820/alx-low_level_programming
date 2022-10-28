#include <stdio.h>
/**
 * main -Prints all numbersto base 10
 *
 * Return: 0
*/
int main(void)
	{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i) + ('0'));
	}
	putchar('\n');
	return (0);
}
