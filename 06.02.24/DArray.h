#pragma once

typedef struct {
    int rows;
    int columns;
    int* data;
} DArray;

DArray createDArray(int rows, int columns);
void setElement(DArray* arr, int row, int column, int val);
int getElement(DArray* arr, int row, int column);
void freeDArray(DArray* arr);