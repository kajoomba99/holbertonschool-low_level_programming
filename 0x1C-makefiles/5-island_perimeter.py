#!/usr/bin/python3
""" Define an island perimeter """


def island_perimeter(grid):
    """ Return the perimeter """

    height = len(grid)
    width = len(grid[0])
    totalsquare = 0
    edges = 0

    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1:
                totalsquare += 4
                if row > 0 and grid[row - 1][col] == 1:
                    edges += 2
                if col > 0 and grid[row][col - 1] == 1:
                    edges += 2
    return (totalsquare - edges)
