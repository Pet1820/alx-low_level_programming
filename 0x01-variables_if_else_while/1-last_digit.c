#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*main-prints the last digit of a random number */
/*return: 0 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
{
	printf("last digit of %d is %d and is greater than 5", n n % 10);
}
else if (n % 10 == 0)
{
	printf("last digit of %d is %d and is 0", n n % 10);
}
else if (n % 10 < 6)
{
	printf("Last digit of %d is %d and is greater than 5", n n % d);
}
	return (0);
}
