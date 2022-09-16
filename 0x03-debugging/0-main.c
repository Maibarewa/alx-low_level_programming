#include "main.c"
/**
 * positive_or_negative - this checks weather number is postive or negative
 * @n: checks sign
 * Return: postive or negative
 */
int main(void)
{
	int n;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}

