#include <stdio.h>
#include <stdlib.h>

/*
 */

int main(void)
{
	int ch;

	printf("Enter a number here:\n");
	scanf("%d", &ch);
	if (ch > 1 && ch < 20)
	{
		sum();
	}
	printf("Continue ?\nEnter 1 to terminate\n");
	scanf("%d", &ch);
	if (ch == 1)
		printf("Program terminated\n");
	else
		sum();
	printf("\nCode developed by Masino\n");
	return (0);
}

int sum(int a, int b)
{
	int m, n;
	
	printf("Enter two numbers here:\n");
	scanf("%d %d", &m, &n);
	printf("The sum is:\n%d\n", m + n);
	return (m + n);
}
