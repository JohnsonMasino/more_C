#include <stdio.h>
#include <stdlib.h>

/*
 */

int main(void)
{
	FILE *ptr = NULL;

	char letter = 'w';
	int age = 23;

	if (ptr == NULL)
		printf("Error!\nNo file\n");
	else
		printf("This code runs\n");
	ptr = fopen("him.txt", "w+");
	fprintf(ptr, "%c\n%d\n", letter, age);
	fclose(ptr);
	return (0);
}
