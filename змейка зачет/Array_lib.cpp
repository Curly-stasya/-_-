#include <iostream>
#include"Array_lib.h"
using namespace std;

int** Array2d(int rows, int colms, int C) {
	int** A = new int* [rows];
	for (int k = 0; k < rows; ++k) {
		A[k] = new int[colms];
		for (int l = 0; l < colms; ++l) {
			A[k][l] = rand() % C;
		}
	}
	return A;
}

int** EmptyArray2d(int rows, int colms) {
	int** A = new int* [rows];
	for (int k = 0; k < rows; ++k) {
		A[k] = new int[colms];
	}
	return A;
}

void output(int** array, int rows, int colms) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < colms; ++j) {
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
}

void cleanArray2d(int** array, int rows) {
	for (int k = 0; k < rows; ++k) {
		delete[] array[k];
	}
	delete[] array;
}

int& getElement(int** A, int row, int colm) {
	return A[row - 1][colm - 1];
}

int* Array(int rows, int colms, int C) {
	int N = rows * colms;
	int* A = new int[N];
	for (int i = 0; i < N; ++i) {
		A[i] = rand() % C;
	}
	return A;
}

void  output2(int* array, int rows, int colms) {
	for (int i = 0; i < rows * colms; ++i) {
		cout << array[i] << ' ';
		if ((i + 1) % colms == 0) cout << endl;
	}
}