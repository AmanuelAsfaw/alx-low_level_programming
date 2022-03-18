#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - print positive or negative
 *@n: integere value
 * Description: Prints a number and whether it is positive, negative or zero.
 *
 * Return: 0
 */
void positive_or_negative(int i)
{
	srand(time(0));
	printf("%d is %s\n", i, (i > 0) ? "positive"
	       : ((i < 0) ? "negative" : "zero"));
}
