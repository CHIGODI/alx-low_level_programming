# Hash Table Project in C

This repository contains a C implementation of a hash table data structure, covering various functionalities and collision handling strategies. It consists of several tasks that aim to deepen understanding of hash functions, hash tables, and collision resolution techniques.

## Tasks Overview:

### 1. `hash_table_create`
- Function to create a hash table.
- Prototype: `hash_table_t *hash_table_create(unsigned long int size);`

### 2. `djb2 Hash Function`
- Implementation of the djb2 hash function.
- Prototype: `unsigned long int hash_djb2(const unsigned char *str);`

### 3. `key_index`
- Retrieves the index of a key in the hash table.
- Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`

### 4. `hash_table_set`
- Adds an element to the hash table.
- Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`

### 5. `hash_table_get`
- Retrieves a value associated with a key in the hash table.
- Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`

### 6. `hash_table_print`
- Prints the contents of the hash table.
- Prototype: `void hash_table_print(const hash_table_t *ht);`

### 7. `hash_table_delete`
- Deletes a hash table.
- Prototype: `void hash_table_delete(hash_table_t *ht);`

### 8. Advanced Task: `Sorted Hash Table`
- Implements an ordered hash table with a sorted linked list.
- Functions include creating, setting, getting, printing, and deleting the sorted hash table.

