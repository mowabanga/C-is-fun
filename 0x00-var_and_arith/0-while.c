#include <stdio.h>

/**
 * main - Beginning
 *
 * Description: Printing table of F and C degrees
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; /*lower limit of temperature scale*/
	upper = 300; /*upper limit*/
	step = 20; /*step size*/

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
