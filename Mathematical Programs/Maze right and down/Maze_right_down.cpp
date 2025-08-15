#include <stdio.h>

// Counts paths from (cRow, cCol) to (eRow, eCol)
int maze(int cRow, int cCol, int eRow, int eCol) {
    int rightways = 0, downways = 0;

    // Reached destination
    if (cRow == eRow && cCol == eCol) 
        return 1;

    // Last column → only down
    if (cCol == eCol)
        downways += maze(cRow + 1, cCol, eRow, eCol);

    // Last row → only right
    if (cRow == eRow)
        rightways += maze(cRow, cCol + 1, eRow, eCol);

    // Otherwise → move right & down
    if (cRow < eRow && cCol < eCol) {
        rightways += maze(cRow, cCol + 1, eRow, eCol);
        downways += maze(cRow + 1, cCol, eRow, eCol);
    }

    return rightways + downways;
}

int main(void) {
    int n, m;
    printf("enter no of rows: ");
    scanf("%d", &n);
    printf("enter no of coloumns: ");
    scanf("%d", &m);

    printf("%d", maze(1, 1, n, m));
    return 0;
}
