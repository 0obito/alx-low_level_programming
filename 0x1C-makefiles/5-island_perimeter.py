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
    for i in grid:
        for j in i:
            if j == 1:
                count += 1

    return count*2+2
