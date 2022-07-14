#include <stdio.h>
#include <string.h>

/**
 * main - contains the variable
 * 	start of the program
 * simple basic program
 * testing mastery of if and while loops
 * return - always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 0)
	{
		printf("You only have one argument.\n");
	}
	else if (argc > 1 && argc < 4)
	{
		printf("Here's your argument:\n");
		for (i = 0; i < argc; i++)
		{
			printf("%s ", argv[i]);
		}
		printf("\n");
	}
	else
	{
		printf("You have too may arguments. You suck.\n");
	}
return (0);
}
