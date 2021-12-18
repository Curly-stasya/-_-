#pragma once

int** Array2d(int rows, int colms, int C);
void output(int** array, int rows, int colms);
void cleanArray2d(int** array, int rows);
int** EmptyArray2d(int rows, int colms);
int& getElement(int** A, int row, int colm);