#include <stdio.h>

/*
 * main - prints variables and uses typedef to customise function datatype.
 * Return: NULL.
 * Code developed by Masino.
 */

typedef struct sch
{
	char nm[10], nm1[10];
	int age;
	float cs;
} sch;

void main(void)
{
	sch me;
	sch *p = &me;

	printf("Enter your name here:\n");
	scanf("%s %s", p->nm, p->nm1);
	printf("Got it %s!\nNow enter your age:\n", p->nm);
	scanf("%d", &p->age);
	printf("Got that too %s\nNow tell us your credit score...\n", p->nm);
	scanf("%f", &p->cs);
	printf("Good!\nYour details are:\n");
	printf("Name: %s %s\nAge: %d\nCredit Score: %f\n", p->nm, p->nm1, p->age, p->cs);
	printf("\nCode developed by Masino\n");
}
