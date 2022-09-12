#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints a random number and findweather it is positive negative or 0
*
* Return: 0;
*/
int main(void)
{
	int n;
		
	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n", n);
else if (n < 0)
	printf("%d is negative\n", n);
else
	printf("%d is zero\n", n);
	
	return (0);
}
