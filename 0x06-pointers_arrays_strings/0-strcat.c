#include "main.h"
#include <string.h>

/**
 * *_strcat - This fuction cancatenate string
 *@dest: parameter
 *@src: parameter2
 *Return: destination
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
