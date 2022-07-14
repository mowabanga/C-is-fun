#include <stdio.h>

/**
 * An array is used to store multiple
 * values in a single variable, instead of declaring
 * single variables.
 *
 * Main - beginning of code
 *
 * Return - always 0
 *
 */

int main(int argc, int *argv[])
{
	int sides[] = {10, 20, 30, 40, 50, 60};
	
	printf("The area of square one of sides %i is: cm", sides[1], sides[1] * sides[1]);

	return (0);
}
