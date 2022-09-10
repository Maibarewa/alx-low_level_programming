#include <stdio.h>

**/
* main - print in the sizeof
*
* Description: Printing Size of function
* This program print various sizeof function
* Return: 0
*/
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %c byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of long: %d byte(s)\n", sizeof(l));
	printf("Size of long long: %d(s)\n", sizeof(ll));
	printf("Size of float: %f byte(s)\n", sizeof(f));
	return (0);

}
