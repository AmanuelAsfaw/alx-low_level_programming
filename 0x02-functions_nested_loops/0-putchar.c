#include "main.h"

/**
 * main - Entry point
 *
 * Return Always 0 (Success)
 */
/* main function */
int main(void)
{
	char h[] = "_putchar";
	int m;

	m = 0;
	while (m <= 7)
	{
		putchar(h[m]);
		m++;
	}

	putchar('\n');
	return (0);
}
