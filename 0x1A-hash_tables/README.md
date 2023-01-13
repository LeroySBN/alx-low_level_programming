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

### 7. $ht['Betty'] = 'Cool'
In [PHP](https://www.php.net/manual/en/intro-whatis.php), hash tables are **ordered**. Wait... WAT? How is this even possible?

![](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2020/9/5ebbea5dea5a575b38243d597604000715982925.gif?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230113%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230113T122630Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=ae3d454269059cbf7e75da835609c75f74282e35dd0c8c1e0400929a091db1fe)

Before you continue, please take a moment to think about it: how you would implement it if you were asked to during an interview or a job. What data structures would you use? How would it work?

For this task, please:
* Read [PHP Internals Book: HashTable](https://www.phpinternalsbook.com/php5/hashtables/basic_structure.html)
* Use the same hash function
* Use these data structures:

```
/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
     char *key;
     char *value;
     struct shash_node_s *next;
     struct shash_node_s *sprev;
     struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
     unsigned long int size;
     shash_node_t **array;
     shash_node_t *shead;
     shash_node_t *stail;
} shash_table_t;
```

Rewrite the previous functions using these data structures:
* `shash_table_t *shash_table_create(unsigned long int size);`
* `int shash_table_set(shash_table_t *ht, const char *key, const char *value);` -> The key/value pair should be inserted in the sorted list at the right place. Note that here we do not want to do exactly like PHP: we want to create a sorted linked list, by key (sorted on ASCII value), that we can print by traversing it. See example.
* `char *shash_table_get(const shash_table_t *ht, const char *key);`
* `void shash_table_print(const shash_table_t *ht);`-> Should print the hash table using the sorted linked list
* `void shash_table_print_rev(const shash_table_t *ht);` -> Should print the hash tables key/value pairs in reverse order using the sorted linked list
* `void shash_table_delete(shash_table_t *ht);`

![php](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/253/php.png)