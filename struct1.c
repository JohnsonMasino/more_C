#include <stdio.h>

/*
 */

struct me
{
	char nmf[10], nml[10];
	int age;
	float crdt;
};

int main(void)
{
	struct me m = {"Johnson", "Masino", 23, 109.45};

	printf("Printing Owner's details thus:\n");
	printf("\nName: %s %s\nAge: %d\nCredit Score: %f\n", m.nmf, m.nml, m.age, m.crdt);
	return (0);
}
