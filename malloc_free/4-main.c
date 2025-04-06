#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **grid;
    int i, j;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++)
        free(grid[i]);
    free(grid);
    return (0);
}
