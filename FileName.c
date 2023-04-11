#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int maze[11][11] = {0};
    int i; int j;
    for (i = 1; i < 11; i++)
    {
        for (j = 1; j < 11; j++)
        {
            scanf("%d", &maze[i][j]);
        }
    }
    i = 2; j = 2;
    while (maze[i][j] != 2) {
        maze[i][j] = 9;
        if (maze[i][j + 1] == 1) {
            if (maze[i + 1][j] == 1) {
                break;
            }
            i++;
        }
        else j++;
    }
    maze[i][j] = 9;
    for (i=1; i < 11; i++) {
        for (j = 1; j < 11; j++)
        {
            printf("%d ", maze[i][j]);
        }
        printf("\n");
    }
}