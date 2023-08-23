#!/usr/bin/python3
# Author: MikiasHailu
""" This function will represent a measuring function for island parameter """
def island_perimeter(grid):
    """ This function will Return the perimiter of an island """
    height = len(grid)
    width = len(grid[0])
    side = 0
    dim = 0
    for m in range(height):
        for n in range(width):
            if grid[m][n] == 1:
                dim = dim + 1
                if (n > 0 and grid[m][n - 1] == 1):
                    side = side + 1
                if (m > 0 and grid[m - 1][n] == 1):
                    side = side + 1
    return dim * 4 - side * 2
