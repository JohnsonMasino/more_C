#include <stdio.h>

/*
 */

struct main
{
	char nm0[10], nm1[10];
	int age;
	float cs;
};

int main(void)
{
	struct main first = {"Johnson", "Masino", 23, 109.5};
	struct main *ptr = &first;


	printf("Printing details with variable here:\n");
	printf("Name: %s %s\nAge: %d\nCredit score: %f\n", first.nm0, first.nm1, first.age, first.cs);
	printf("\nPrinting details with pointer here:\n");
	printf("Name: %s %s\nAge: %d\nCredit score: %f\n", ptr->nm0, ptr->nm1, ptr->age, ptr->cs);
	printf("\nCode developed by Masino\n");
	return (0);
}
