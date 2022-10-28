## More Singly linked lists Program Overview

0-print_listint.c >> function that prints all the elements of a listint_t list

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a`

1-listint_len.c >> function that returns the number of elements in a linked listint_t list.

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-listint_len.c -o b`

2-add_nodeint.c >> function that adds a new node at the beginning of a listint_t list.

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_nodeint.c 0-print_listint.c -o c`

3-add_nodeint_end.c >> function that adds a new node at the end of a listint_t list.

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_nodeint_end.c 0-print_listint.c -o d`

4-free_listint.c >> function that frees a listint_t list.

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_nodeint_end.c 0-print_listint.c 4-free_listint.c -o e && valgrind ./e`

5-free_listint2.c >> function that frees a listint_t list and sets the head to NULL.

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c -o f && valgrind ./f`

6-pop_listint.c >> function that deletes the head node of a listint_t linked list, and returns the head node’s data (n)

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 6-pop_listint.c -o g && valgrind ./g`

7-get_nodeint.c >> function that returns the nth node of a listint_t linked list.

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 7-get_nodeint.c -o h && ./h`

8-sum_listint.c >> function that returns the sum of all the data (n) of a listint_t linked list.

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_nodeint_end.c 5-free_listint2.c 8-sum_listint.c -o i`

9-insert_nodeint.c >> function that inserts a new node at a given position.

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 9-insert_nodeint.c -o j`

10-delete_nodeint.c >> function that deletes the node at index index of a listint_t linked list.

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 10-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 10-delete_nodeint.c -o k && valgrind ./k`

100-reverse_listint.c >> function that reverses a listint_t linked list.

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 100-reverse_listint.c -o l && valgrind ./l`

101-print_listint_safe.c >> function that prints a listint_t linked list. This function can print lists with a loop by going through it only once.

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 2-add_nodeint.c 101-print_listint_safe.c -o m`

102-free_listint_safe.c >> function that frees a listint_t list. This list can free lists with a loop by going through it only once.

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-main.c 2-add_nodeint.c 101-print_listint_safe.c 102-free_listint_safe.c -o n`

103-find_loop.c >> function that finds the loop in a linked list.

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-main.c 2-add_nodeint.c 101-print_listint_safe.c 102-free_listint_safe.c 103-find_loop.c -o o`

