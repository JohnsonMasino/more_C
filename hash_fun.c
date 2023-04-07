#define CAPACITY 50000 /* Size of the hash table*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	printf("\nCode developed by Masino\n");

	return (0);
}


unsigned long hash_function(char *stm)
{
	unsigned long i = 0;
	int j = 0;

	for (j; stm[j]; j++)
		i += stm[j];

	return (i % CAPACITY);
}

typedef struct Hash_Item
{
	char *key;
	char *value;
} Hash_Item;

typedef struct HashTable
{
	Hash_Item **items;
	int size;
	int count;
} HashTable;

Hash_Item* create_item(char *key, char *value)
{
	Hash_Item *item = (Hash_Item*) malloc(sizeof(Hash_Item));
	item->key = (char*) malloc(strlen(key) + 1);
	item->value = (char*) malloc(strlen(value) +1);
	strcpy(item->key, key);
	strcpy(item->value, value);

	return(item);
}
