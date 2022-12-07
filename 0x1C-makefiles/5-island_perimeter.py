#!/usr/bin/python3
"""
This module provides the function island_perimeter.
"""


def island_perimeter(grid):
    """
    This is a function that returns the perimeter
    of the island described in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edge = 0
    size = 0
    
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1
    return size * 4 - edge * 
