#!/usr/bin/python3
"""
Islanda Perimeter
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    filas = len(grid)
    columnas = len(grid[0])
    perimeter = 0

    for f in range(filas):
        for c in range(columnas):
            if grid[f][c] == 1:
                if f - 1 >= 0 and grid[f - 1][c] == 0:
                    perimeter += 1
                if c + 1 < columnas and grid[f][c + 1] == 0:
                    perimeter += 1
                if f + 1 < filas and grid[f + 1][c] == 0:
                    perimeter += 1
                if c - 1 >= 0 and grid[f][c - 1] == 0:
                    perimeter += 1
    return perimeter
