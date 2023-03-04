#include <stdio.h>
#include <stdlib.h>

/*
 */

int main(void)
{
	int ch = 1;
	int *ptr;

	while (ch < 50)
	{
		printf("Memory leak demo\n");
		ptr = (int *)malloc(40000 * sizeof(int));

		printf("Continue ??\nEnter 1 to continue!\n");
		scanf("%d", &ch);
		free(ptr);
	}
	return (0);
}
