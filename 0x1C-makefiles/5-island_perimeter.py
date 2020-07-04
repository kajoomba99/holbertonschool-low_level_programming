#!/usr/bin/python3
"""
Islanda Perimeter
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    perimeter = 0
    
    for f in range(len(grid)):
        for c in range(len(grid[f])):
            if grid[f][c] == 1:
                if f - 1 >= 0 and grid[f - 1][c] == 0:
                    perimeter += 1
                if c + 1 < len(grid[f]) and grid[f][c + 1] == 0:
                    perimeter += 1
                if f + 1 < len(grid) and grid[f + 1][c] == 0:
                    perimeter += 1
                if c - 1 >= 0 and grid[f][c - 1] == 0:
                    perimeter += 1
    return perimeter
