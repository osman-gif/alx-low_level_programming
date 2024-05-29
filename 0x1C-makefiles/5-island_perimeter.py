#!/usr/bin/python3

def island_perimeter(grid):
    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Start with the assumption that each land cell contributes 4 to the perimeter

                # Check left, right, up, and down neighbors
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Subtract 2 if the left neighbor is land
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  # Subtract 2 if the upper neighbor is land

    return perimeter

