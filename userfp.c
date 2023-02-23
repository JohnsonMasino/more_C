#include <stdio.h>

/*
 */

struct obi
{
	char nm0[10], nm1[10];
	int age;
};

int main(void)
{
	struct obi stv;
	struct obi *p = &stv;

	printf("Enter your name here:\n");
	scanf("%s %s", stv.nm0, stv.nm1);
	printf("Noted!\nEnter your age here:\n");
	scanf("%d", &stv.age);
	printf("Got it!\nPrinting details using pointer only...\n");
	printf("Name: %s %s\nAge: %d\n", p->nm0, p->nm1, p->age);
	printf("\nPrinting with variables here:\n");
	printf("Name: %s %s\nAge: %d\n", stv.nm0, stv.nm1, stv.age);
	printf("\nCode developed by Masino\n");
	return (0);
}
