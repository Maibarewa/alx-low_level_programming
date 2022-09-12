#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
* main - C programming
*
* Description: how to use if else and variable
* This pp
* this program prints random number
* Return: 0
*/
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() -RAND_MAX/2;

	/* if else condition */
if(n>0)
{
	printf("%l is positive\n" ,n);
}
else if (n==0;)
{
	printdf("%l is zero\n" ,n);
}
else if (n<0)
{
	printf("%l is negative\n" ,n);
}
	return (0);
}
