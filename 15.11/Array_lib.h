#pragma once

int** Array2d(int rows, int colms, int C);// создание 2d массива и заполнение его  по умолчанию
void output(int** array, int rows, int colms);//вывод  2d массива
void cleanArray2d(int** array, int rows);
int** EmptyArray2d(int rows, int colms);