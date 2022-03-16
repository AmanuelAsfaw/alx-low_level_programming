#include "1-main.h"

/**
 * print_alphabet - print all alphabet letters
 */
void print_alphabet(void)
{
	int m;

	for (m = 'a'; m <= 'z'; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
