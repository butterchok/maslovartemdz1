#include <stdio.h>
#include <stdlib.h>
#include "DArray.h"

DArray createDArray(int rows, int columns) {
    DArray arr;
    arr.rows = rows;
    arr.columns = columns;
    arr.data = (int*)malloc(rows * columns * sizeof(int));

    if (arr.data == NULL) {
        printf("ERROR: memory alloc failed\n");
        exit(1);
    }

    return arr;
}

void setElement(DArray* arr, int row, int column, int val) {
    if (row >= 0 && row < arr->rows && column >= 0 && column < arr->columns) {
        *(arr->data + (row * arr->columns) + column) = val;
    }
    else {
        printf("ERROR: Out of range\n");
        exit(1);
    }
}

int getElement(DArray* arr, int row, int column) {
    return *(arr->data + (row * arr->columns) + column);
}

void freeDArray(DArray* arr) {
    free(arr->data);
}