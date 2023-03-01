#!/usr/bin/python3
"""Module 5-island_perimeter"""

def island_perimeter(grid):
    """Computes the perimeter of an island """
    perimeter = 0
    for y, row in enumerate(grid):
        for x, item in enumerate(row):
            if item == 1:
                if x == 0 or grid[y][x - 1] == 0:
                    perimeter += 1
                if x == len(row) - 1 or grid[y][x + 1] == 0:
                    perimeter += 1
                if y == 0 or grid[y - 1][x] == 0:
                    perimeter += 1
                if y == len(grid) - 1 or grid[y + 1][x] == 0:
                    perimeter += 1
    return perimeter
