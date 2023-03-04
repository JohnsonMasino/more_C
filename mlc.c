#include <stdio.h>
#include <stdlib.h>

/*
 *
 */

int main(void)
{
	int *p, i, n;

	p = (int *)malloc(n * sizeof(int));

	if (p == NULL)
		printf("No size allocated yet\n");
	printf("Enter the number of celebrities coming for this event:\n");
	scanf("%d", &n);
	printf("Enter their net worth in $ individually:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", (p + i));
	}
	printf("Confirming these values:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", *(p + i));
	}
	printf("Got it!\nWaiting now for the D day\n");
	printf("\nCode developed by  Masino\n");
	free(p);
	return (0);
}
