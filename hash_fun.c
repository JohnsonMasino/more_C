#define CAPACITY 50000 /* Size of the hash table*/

#include <stdio.h>
#include <stdlib.h>

unsigned long hash_function(char *str)
{
	unsigned long i = 0;
	int j = 0;

	for (j; str[j]; j++)
		i += str[j];

	return (i % CAPACITY);
}

void main(void)
{
	hash_function("Paulo");
	//return (0);
}
