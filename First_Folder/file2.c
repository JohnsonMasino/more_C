#include <stdio.h>
#include <stdlib.h>

/*
 * main: accepts an integer input and returns a predefined
 * string based on the divisibility of the number
 * return: 0.
 * Code developed by Masino
 */

int main(void)
{
	int num;
	int i;

	printf("Hi, enter a number here: ");
	scanf("%d", &num);
	for (i = 0; i <= num; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("Fizzbuzz\n");
		else if (i % 3 == 0)
			printf("Fizz\n");
		else if (i % 5 == 0)
			printf("Buzz\n");
		else
			printf("%d\n", i);
	};
	printf("\nCode developed by Masino\n");
	return (0);
}
