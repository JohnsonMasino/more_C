#include <stdio.h>
#include <stdlib.h>

/*
 */

void main(void)
{
	FILE *ptr = NULL;

	char a = 's';

	ptr = fopen("abc.txt", "w");
	if (ptr == NULL)
	{
		printf("Error here...!\n");
		exit (1);
	}
	else
		printf("We are good to go\n");
	fputc(a, ptr);
	printf("\nCode developed by Masino\n");
	fclose(ptr);
}
