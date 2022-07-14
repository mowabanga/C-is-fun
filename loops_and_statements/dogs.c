#include <stdio.h>

/**
 * Simple program that asks you how many dogs you have
 *
 * main - start of the code
 *
 * return - always 0
 *
 */

int main(void)
{
	printf("How many dogs do you have?: ");
	int dogs;

	scanf("%i\n", &dogs);

	printf("You have %i dogs.\n", dogs);

	return (0);
}
