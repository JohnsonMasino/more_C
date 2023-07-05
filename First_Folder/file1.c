#include <stdio.h>

/*
 * main: receives name and age
 * inputs and prints them with a statement
 * return: Always 0.
 * code developed by Masino
 */

int main()
{
	char name1[20];
	char name2[20];
	int age;

	printf("Tell us your first and last names please: ");
	scanf("%s %s", name1, name2);
	printf("%s %s noted.\nHow old are you: ", name1, name2);
	scanf("%d", &age);
	printf("%d is a good age my dear.\n", age);
	printf("\nCode developed by Masino\n");

	return (0);
}
