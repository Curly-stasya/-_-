#include <iostream>
using namespace std;

int** Array2d(int rows, int colms, int C) {
	int** A = new int* [rows];
	for (int k = 0; k < rows; ++k) {
		A[k] = new int[colms];
<<<<<<< HEAD
		for (int l = 0; l < colms; ++l) {
=======
		for (int l = 0; l < colms; ++l) {//çàïîëíåíèå
>>>>>>> ff7af3b5801202b825fa13c77723832f706a84b7
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
<<<<<<< HEAD
}
=======
}
>>>>>>> ff7af3b5801202b825fa13c77723832f706a84b7
