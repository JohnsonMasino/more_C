#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 */

void main(void)
{
	FILE *ptr = NULL;

	char name[10];
	float age;

	ptr = fopen("main.txt", "w");
	if (ptr == NULL)
		printf("Empty pointer here\n");
	else
		printf("We are good to go\n");
	printf("Enter your nickname and your age respectively here:\n");
	scanf("%s %f", name, &age);
	fprintf(ptr, "%s %f\n", name, age);
	printf("\nCode developed by masino\n");
	fclose(ptr);
}
