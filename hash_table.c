#include "hash_table.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

hash_table *init_table(){
	hash_table *table;
	table = malloc(sizeof(hash_table));
	table->array = malloc(sizeof(int)*17);

	table->size = 17;
	memset(table->array, 0, sizeof(int)*17);
	
	//if(table == NULL)
		//through error

	return table;
}

void print_table(hash_table *table){

	//printf(table->[	
}

hash_table *destroy_table(hash_table *table){
	free(table->array);
	free(table);
}

int hash(int x, int size){
	int a = 11;
	return a*x % size;
}

void insert(hash_table *table, int key){
	int index = hash(key, table->size);

	table->array[index] = key;
}

void delete(hash_table *tabel, int key){
	int index = hash(key, table->size)

	//if(table->array[index] == key)	
	table->array[index] = 0;
}

int lookup(hash_table *table, int key){
	int index = hash(key, table->size);
	return table->array[index];
}
