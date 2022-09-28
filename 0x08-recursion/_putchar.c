
/**
 * _putchar(char c) - write the chracter c to the stdout
 * @c: The chracter to print 
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
