#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * printout whether a number of positive,zero.or negative
 * return: 0
*/
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf(" %d\n is negative", n);
	}
			else if (n == 0)
			{
				printf("the number is %d\n is zero", n);
			}
				else if (n > 0)
					{
						printf("the number is %d\n positive", n);
					}
/**
 * return 0 for success
 */
	return (0);
}
