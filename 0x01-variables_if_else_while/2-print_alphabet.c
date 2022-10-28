#include <stdio.h>
/**
 * main -Prints small alphabetical letters
 *
 * Return: 0;
*/
int main(void)
{
char alph;

for (alph = 'a'; alph <= 'z'; alph++)
{
putchar (alph);
}
putchar ('\n');
return (0);
}
