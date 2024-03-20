#!/usr/bin/python3
"""
5-island_perimeter module
"""


def island_perimeter(grid):
    '''
    returns the perimeter of
    the island described in grid
    '''
    count = 0
    if isinstance(grid, list):
        for i in grid:
            if not isinstance(i, list):
                raise TypeError("grid must be a list of lists")
            for j in i:
                if j == 1:
                    count += 1
        if count == 0:
            return count
        else:
            return count*2+2
    else:
        raise TypeError("grid must be a list")
