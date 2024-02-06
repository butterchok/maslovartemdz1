#include <stdio.h>
#include <stdlib.h>
#include "DArray.h"

#define MAX_ROWS 3
#define MAX_COLUMNS 4

int main() {
    DArray arr = createDArray(MAX_ROWS, MAX_COLUMNS);

    for (int i = 0; i < MAX_ROWS; i++) {
        for (int j = 0; j < MAX_COLUMNS; j++) {
            setElement(&arr, i, j, i * MAX_COLUMNS + j);
        }
    }

    for (int i = 0; i < MAX_ROWS; i++) {
        for (int j = 0; j < MAX_COLUMNS; j++) {
            printf("%d ", getElement(&arr, i, j));
        }
        printf("\n");
    }

    freeDArray(&arr);

    return 0;
}