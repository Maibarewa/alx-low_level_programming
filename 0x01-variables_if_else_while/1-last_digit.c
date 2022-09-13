#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 * main - assign arandom number to the varible n each time is executed and *
 * Description: The if else variable 
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int x;

	x = n % 10;
	printf("Last digit of %d is %d ", n, x);
	if  (x > 5)
	{
		printf(" and is greater than 5");
	}
	if (x == 0)
	{
		printf("and is 0");
	}
	if (x < 6 && x != 0)
	{
		printf("and is less than 6 not 0);
	}
	printf("\n");
	
	return (0);
}
