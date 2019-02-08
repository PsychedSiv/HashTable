typedef struct {
	int size;
	int *array;
} hash_table;

void print_table(hash_table *table); 
hash_table *init_table();
hash_table *destroy_table(hash_table *table);
void insert(hash_table *table, int key);
void delete(hash_table *table, int key);
int lookup(hash_table *table, int key);
