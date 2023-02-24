#include <stdio.h>
#pragma pack(1)

/*
 * main - prints the sise of a variable(pointer).
 * Return: 0.
 * Code developed by Masino.
 */

typedef struct me
{
	char name[10], namee[10];
	int age;
	float credit_score;
	float ht;
	int wt;
} me;

int main(void)
{
	me mi;
	me *p = &mi;

	printf("The size of the variabe is: %lu\n", sizeof(mi));
	printf("Enter your details in the followinig order:\n1. Name\n2. Age\n3. Credit Score\n4. Height\n5. Weight\n");
	scanf("%s %s %d %f %f %d", p->name, p->namee, &p->age, &p->credit_score, &p->ht, &p->wt);
	printf("Your details are as follows...\n");
	printf("Name: %s %s\nAge: %d\nCredit Score: %f\nHeight: %f\nWeight: %d\n", p->name, p->namee, p->age, p->credit_score, p->ht, p->wt);
	printf("\nCode developed by Masino\n");
	return (0);
}
