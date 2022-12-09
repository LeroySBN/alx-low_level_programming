# Tasks

## 0. Print list
A function that prints all the elements of a `dlistint_t list`.
* Prototype: `size_t print_dlistint(const dlistint_t *h);`
* Return: the number of nodes

**File**: [0-print_dlistint.c](./0-print_dlistint.c)

## 1. List length
A function that returns the number of elements in a linked `dlistint_t` list.
* Prototype: `size_t dlistint_len(const dlistint_t *h);`

**File**: [1-dlistint_len.c](./1-dlistint_len.c)

## 2. Add node
A  function that adds a new node at the beginning of a `dlistint_t` list.
* Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

**File**: [2-add_dnodeint.c](./2-add_dnodeint.c)

## 3. Add node at the end
A function that adds a new node at the end of a `dlistint_t` list.
* Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

**File**: [3-add_dnodeint_end.c](./3-add_dnodeint_end.c)

## 4. Free list
A function that frees a `dlistint_t` list.
* Prototype: `void free_dlistint(dlistint_t *head);`

**File**: [4-free_dlistint.c](./4-free_dlistint.c)

## 5. Get node at index
A function that returns the nth node of a `dlistint_t` linked list.
* Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
* where `index` is the index of the node, starting from `0`
* if the node does not exist, return `NULL`

**File**: [5-get_dnodeint.c](./5-get_dnodeint.c)

## 6. Sum list
A function that returns the sum of all the data (n) of a `dlistint_t` linked list.
* Prototype: `int sum_dlistint(dlistint_t *head);`
* if the list is empty, return `0`

**File**: [6-sum_dlistint.c](./6-sum_dlistint.c)

## 7. Insert at index
A function that inserts a new node at a given position.

* Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
* where `idx` is the index of the list where the new node should be added. Index starts at `0`
* Returns: the address of the new node, or `NULL` if it failed
* if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`
The files `2-add_dnodeint.c` and `3-add_dnodeint_end.c` will be compiled together

`$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 2-add_dnodeint.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 7-insert_dnodeint.c -o j`

**File**: [7-insert_dnodeint.c](./7-insert_dnodeint.c), [2-add_dnodeint.c](./2-add_dnodeint.c), [3-add_dnodeint_end.c](./3-add_dnodeint_end.c)

## 8. Delete at index
A function that deletes the node at index index of a `dlistint_t` linked list.
* Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
* where `index` is the index of the node that should be deleted. Index starts at `0`
* Returns: `1` if it succeeded, `-1` if it failed

**File**: [8-delete_dnodeint.c](./8-delete_dnodeint.c)

## 9. Crackme4
Find the password for `crackme4`.
* Save the password in the file `100-password`
* Your file should contain the exact password, no new line, no extra space
* Hint: The program prints “OK” when the password is correct

**File**: [100-password](./100-password)

## 10. Palindromes
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is `9009` = `91` × `99`.

Find the largest palindrome made from the product of two 3-digit numbers.
* Save the result in the file `102-result`
* Your file should contain the exact result, no new line, no extra space

**File**: [102-result](./102-result)

## 11. crackme5
Write a keygen for `crackme5`.
* Usage of the crackme: `./crackme5 username key`
* The crackme will segfault if you do not enter the correct key for the user
* Usage for your keygen: `./keygen5 username`
* Your keygen should print a valid key for the `username`

**File**: [103-keygen.c](./103-keygen.c)

# Resources

[What is a Doubly LInked List](https://www.youtube.com/watch?v=k0pjD12bzP0)
