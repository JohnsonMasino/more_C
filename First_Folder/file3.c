#include <stdio.h>

/*
 * main: Prints some predefined statements accordin
 * to some conditions for some digits entered by a user
 * Return: Always 0
 * Code developed by Masino
 */

int main(void)
{
	int number;
	int i;

	printf("Hi...\nEnter your preferred number here: ");
	scanf("%d", &number);
	for (i = 1; i <= number; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("\nDivisible by 3 and 5\n");
		else if (i % 3 == 0)
			printf("Divisible by 3\n");
		else if (i % 5 == 0)
			printf("Divisible by 5\n");
		else
			printf("%d\n", i);
	}
	printf("\nCode developed by Masino\n");
	return (0);
}
