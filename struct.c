#include <stdio.h>

/*
 * main - stores and prints the data of student(s).
 * Return: 0.
 * Code by Masino.
 */

struct student
{
	int age;
	char name[10];
	float mk;
};

void main(void)
{
	struct student s1 = {23, "Johnson", 65.5};
	struct student s2 = {22, "Kelechi", 60.9};

	printf("The first student's detials:\nAge: %d\nName: %s\nMark: %f\n", s1.age, s1.name, s1.mk);
	printf("The second student's details:\nAge: %d\nName: %s\nMark: %f\n", s2.age, s2.name, s2.mk);
}
