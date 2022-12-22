#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- print the work
 * foloeed by a new line
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch = 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

