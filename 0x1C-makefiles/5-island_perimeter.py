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
            for j in i:
                if j == 1:
                    count += 1
        if count == 0:
            return count
        else:
            return count*2+2
