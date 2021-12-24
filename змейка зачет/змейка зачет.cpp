#include <iostream>
#include "Array_lib.h"

using namespace std;

int** snake(int number, int rows, int colms) {
	int** A = new int* [rows];
	for (int k = 0; k < rows; ++k) {
		A[k] = new int[colms];
		if (k % 2 == 0) {
			for (int l = 0; l < colms; ++l) {//заполняю слева направо
				A[k][l] = number;
				++number;
			}
		}
		if (k % 2 != 0) {
			for (int p = colms - 1; p >= 0; --p) {//заполняю справа налево
				A[k][p] = number;
				++number;
			}
		}
	}
	return A;
	cleanArray2d(A, rows);
}

void test(int first_num, int rows, int colms) {
	int test1[5][5] = { {1,2,3,4,5}, {10,9,8,7,6}, {11,12,13,14,15}, {20,19,18,17,16}, {21,22,23,24,25} };
	int test2[2][6] = { {1,2,3,4,5,6},{12,11,10,9,8,7} };
	int test3[5][3] = { {0,1,2}, {5,4,3}, {6,7,8}, {11,10,9}, {12,13,14} };
	int flag1 = 0;
	int flag2 = 0;
	int flag3 = 0;
	int** A = snake(first_num, rows, colms);
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < colms; ++j) {
			if (rows == 5 && colms == 5) {//test 1
				if (A[i][j] != test1[i][j]) flag1 = 1;
			}
			if (rows == 2 && colms == 6) {// test 2
				if (A[i][j] != test2[i][j]) flag2 = 1;
			}
			if (rows == 5 && colms == 3) {// test 3
				if (A[i][j] != test3[i][j]) flag3 = 1;
			}
		}
	}
	cleanArray2d(A, rows);
	if (rows == 5 && colms == 5) {
		flag1 == 0 ? cout << "Test 1 passed": cout<< "Tast 1 failed ";
		cout << endl;
	}
	if (rows == 2 && colms == 6) {
		flag2 == 0 ? cout << "Test 2 passed" : cout << "Tast 2 failed ";
		cout << endl;
	}
	if (rows == 5 && colms == 3) {
		flag3 == 0 ? cout << "Test 3 passed" : cout << "Tast 3 failed ";
		cout << endl;
	}
}


int main() {
	test(1, 5, 5);// квадратная матрица
	test(1, 2, 6);// прямоугольная горизонтальная
	test(0, 5, 3);// прямоугольная вертикальная

	//Визуализация
	setlocale(LC_ALL, "Rus");
	int N, r, c;
	cout << "Введите размеры" << endl;
	cout << "Количество строк: " << endl;
	cin >> r;
	cout << "Количество столбцов: " << endl;
	cin >> c;
	cout << "Начальное число:  " << endl;
	cin >> N;
	cout << "Массив:" << endl;
	int** B = snake(N, r,c);
	output(B,r,c);
	cleanArray2d(B, r);
}



