# Search Algorithm

## Resources
* [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
* [Space complexity (1)](https://www.geeksforgeeks.org/g-fact-86/)

## Tasks
### 0.Linear search
Function that searches for a value in an array of integers using the [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search)

File: [0-linear.c](./0-linear.c)

### 1. Binary search
Function that searches for a value in a sorted array of integers using the [Binary search algorithm](./1-binary.c)

File: [1-binary.c](./1-binary.c)

### 2. Big O #0
What is the time complexity (worst case) of a linear search in an array of size n?

File: [2-O](./2-O)

### 3. Big O #1
What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

File: [3-O](./3-O)

### 4. Big O #2
What is the time complexity (worst case) of a binary search in an array of size n?

File: [4-O](./4-O)

### 5. Big O #3
What is the space complexity (worst case) of a binary search in an array of size n?

File: [5-O](./5-O)

### 6. Big O #4
What is the space complexity of this function / algorithm?
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

File: [6-O](./6-O)
