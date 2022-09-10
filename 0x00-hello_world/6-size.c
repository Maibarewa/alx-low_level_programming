#include <stdio.h>

**/
* main - print the sizeof function on the main
*
* Description: Using the main and sizeof function
* This program print various types of sizeof function
* Return: 0
*/
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %c bytes(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long: %d byte(s)\n", sizeof(l));
	printf("Size of a long long: byte(s)\n", sizeof(ll));
	printf("Size of a float: %f byte(s)\n", sizeof(f));
}
