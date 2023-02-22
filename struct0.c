#include <stdio.h>

/*
 * main -
 * Return: 0.
 * Code by Masino.
 */

struct esut
{
	char nm1[10];
	int age;
	float mk;
};

int main(void)
{
	struct esut s1;
	struct esut s2;
	struct esut s3;
	struct esut s4;
	struct esut s5;

	printf("Enter name, age and mark of a student:\n");
	scanf("%s %d %f", s1.nm1, &s1.age, &s1.mk);
	printf("Showing detials you just entered...\n");
	printf("Name: %s\nAge: %d\nMark: %f\n", s1.nm1, s1.age, s1.mk);
	printf("\nCode developed by Masino\n");
	return (0);
}
