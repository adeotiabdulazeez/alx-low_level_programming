#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - print
 * walk thriuhh
 * Return : Always 0 (sucess)
 */
int main(void)
{
	char ch = 'a';

	while  (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}



