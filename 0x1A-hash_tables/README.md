# Hash Tables
## Resources
* [What is a HashTable Data Structure - Introduction to Hash Tables, Part 0](https://www.youtube.com/watch?v=MfhjkfocRR0)
* [Hash Function](https://en.wikipedia.org/wiki/Hash_function)
* [Hash table](https://en.wikipedia.org/wiki/Hash_table)
* [All about hash tables](https://www.digitalocean.com/community/tutorials/hash-table-in-c-plus-plus)
* [why hash tables and not arrays](https://stackoverflow.com/questions/31930046/what-is-a-hash-table-and-how-do-you-make-it-in-c)

## Tasks
### 0. >>> ht = 0
Function that creates a hash table.
* Prototype: `hash_table_t *hash_table_create(unsigned long int size);` where `size` is the size of the array
* Returns a pointer to the newly created hash table
* If something went wrong, your function should return `NULL`

File: [0-hash_table_create.c](./0-hash_table_create.c)

### 1.djb2
A hash function implementing the djb2 algorithm.
* Prototype: `unsigned long int hash_djb2(const unsigned char *str);`
* You are allowed to copy and paste the function from [this page](https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8)

File: [1-djb2.c](./1-djb2.c)

### 2. key -> index
A function that gives you the index of a key.
* Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);` where `key` is the key and `size` is the size of the array of the hash table
* This function should use the `hash_djb2` function that you wrote earlier
* Returns the index at which the key/value pair should be stored in the array of the hash table
* You will have to use this hash function for all the next tasks

File: [2-key_index.c](./2-key_index.c)

### 3. >>> ht['betty'] = 'cool'
A function that adds an element to the hash table.
* Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);` Where `ht` is the hash table you want to add or update the key/value to, `key` is the key. key can not be an empty string, and `value` is the value associated with the key. `value` must be duplicated. `value` can be an empty string
* Returns: `1` if it succeeded, `0` otherwise
* In case of collision, add the new node at the beginning of the list

If you want to test for collisions, here are some strings that collide using the djb2 algorithm:
* **hetairas** collides with **mentioner**
* **heliotropes** collides with **neurospora**
* **depravement** collides with **serafins**
* **stylist** collides with **subgenera**
* **joyful** collides with **synaphea**
* **redescribed** collides with **urites**
* **dram** collides with **vivency**

File: [3-hash_table_set.c](./3-hash_table_set.c)

### 4. >>> ht['betty']
A function that retrieves a value associated with a key.
* Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);` where `ht` is the hash table you want to look into, and `key` is the key you are looking for
* Returns the value associated with the element, or `NULL` if key couldn’t be found

File: [4-hash_table_get.c](./4-hash_table_get.c)

### 5. >>>print(ht)
A function that prints a hash table.
* Prototype: `void hash_table_print(const hash_table_t *ht);` where `ht` is the hash table
* You should print the key/value in the order that they appear in the array of hash table
* If `ht` is NULL, don’t print anything

File: [5-hash_table_print.c](./5-hash_table_print.c)

### 6. del ht
A function that deletes a hash table.
* Prototype: `void hash_table_delete(hash_table_t *ht);` where `ht` is the hash table

File: [6-hash_table_delete.c](./6-hash_table_delete.c)
