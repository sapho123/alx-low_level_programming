#include <stdio.h>
/**
 * main - main block
 * A program that prints the alphabet
 * in lower case, and then in uppercase
 * followed by new line
 * Retunrn: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
