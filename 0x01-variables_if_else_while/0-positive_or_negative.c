#include <stdlib.h>
#include <time.h>
#include <time.h>

/**
 * main - prints a random number and find weather is the number is positiv * negative or zero
 *
 * 
 * Return: 0 .
 */
int main(void)
{
	in n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
{
	printf("%d is positive\n", n);
} 
	else if (n == 0)
{
	printf("%d is zeron\", 0);
}	
	else 	
{
	printf("%d is negative\n",0);
}
	return (0);
}
