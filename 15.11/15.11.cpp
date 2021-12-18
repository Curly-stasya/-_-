#include <iostream>
#include"Array_lib.h"
using namespace std;


//№1 Создание 2-массива с заданными размерами.
/*int main() {
	setlocale(LC_ALL, "Rus");
	int r, c;
	cout<<"Введите размеры"<<endl;
	cout<<"Количество строк: "<< endl;
	cin>>r;
	cout<<"Количество столбцов: "<< endl;
	cin>>c;
	cout << "Массив:" << endl;
	int** A = EmptyArray2d(r, c);
	output(A, r, c);
	cleanArray2d(A, r);
}*/

//№2 Для независимого 2 - массива реализовать освобождение ресурсов, занимаемых данным массивом
/*int main() {
	setlocale(LC_ALL, "Rus");
	int r, c;
	cout << "Введите размеры" << endl;
	cout << "Количество строк: " << endl;
	cin >> r;
	cout << "Количество столбцов: " << endl;
	cin >> c;
	cout << "Массив:" << endl;
	int** A = Array2d(r, c, 100);
	cleanArray2d(A, r);
}*/

//№3 Инициализация 2-массива - все элементы одинаковы и равны заданному значению.
/*int main() {
	setlocale(LC_ALL, "Rus");
	int N, r, c;
	cout<<"Введите размеры"<<endl;
	cout<<"Количество строк: "<< endl;
	cin>>r;
	cout<<"Количество столбцов: "<< endl;
	cin>>c;
	cout<<"Заполнить массив числом : "<< endl;
	cin>>N;
	cout << "Массив:" << endl;
	int** A = EmptyArray2d(r,c);
	for (size_t k = 0; k < r; ++k) {
		for (int l=0; l<c; ++l){
			A[k][l]=N;
		}
	}
	output(A, r, c);
	cleanArray2d(A, r);
}*/

//№4 Инициализация 2-массива с 1 на главной диагонали и 0 в остальных элементах
/*int main() {
	setlocale(LC_ALL, "Rus");
	int r, c;
	cout<<"Введите размеры"<<endl;
	cout<<"Количество строк: "<< endl;
	cin>>r;
	cout<<"Количество столбцов: "<< endl;
	cin>>c;
	cout << "Массив:" << endl;
	//создание массива
	int** A = EmptyArray2d(r,c);
	for (int k = 0; k < r; ++k) {
		for (int l=0; l<c; ++l){
			A[k][l]=0;
			if (k==l){
				A[k][l]=1;
			}
		}
	}
	output(A, r, c);
	cleanArray2d(A, r);
}*/

//№5 Создание 2-массива, являющегося транспонированным исходным.
/*int main() {
	setlocale(LC_ALL, "Rus");
	int r, c;
	cout<<"Введите размеры"<<endl;
	cout<<"Количество строк: "<< endl;
	cin>>r;
	cout<<"Количество столбцов: "<< endl;
	cin>>c;
	cout << "Массив:" << endl;
	int** A = Array2d(r, c, 100);
	output(A, r, c);
	cout << "Транспонированный массив:" << endl;
	int** B = EmptyArray2d(c, r);
	for (int k = 0; k < c; ++k) {
		for (int l=0; l < r; ++l){
			B[k][l]=A[l][k];
		}
	}
	output(B, c, r);
	cleanArray2d(A, r);
	cleanArray2d(B, r);
}*/

//№6 Модификация исходного 2-массива в виде поворота на 180 градусов
/*int main() {
	setlocale(LC_ALL, "Rus");
	int r, c;
	cout << "Введите размеры" << endl;
	cout << "Количество строк: " << endl;
	cin >> r;
	cout << "Количество столбцов: " << endl;
	cin >> c;
	cout << "Массив:" << endl;
	int** A = Array2d(r, c, 100);
	output(A, r, c);
	cout << "Измененный массив" << endl;
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c / 2; ++j) {
			swap(A[i][j], A[i][c - j - 1]);
		}
	}
	output(A, r, c);
	cleanArray2d(A, r);
}*/

//№7 Умножение матрицы на число
/*int main() {
	setlocale(LC_ALL, "Rus");
	int r, c, N;
	cout << "Введите размеры" << endl;
	cout << "Количество строк: ";
	cin >> r;
	cout << "Количество столбцов: ";
	cin >> c;
	cout << "Число: ";
	cin >> N;
	cout << "Массив:" << endl;
	int** A = Array2d(r, c, 100);
	output(A, r, c);
	for (int i = 0; i < r; ++i) {//поэлементное умножение
		for (int j = 0; j < c; ++j) {
			A[i][j] *= N;
		}
	}
	cout << "Умноженный массив" << endl;
	output(A, r, c);
	cleanArray2d(A, r);
}*/

//№8 Создание матрицы, как результата умножения матрицы на число.
/*int main() {
	setlocale(LC_ALL, "Rus");
	int r, c, N;
	cout << "Введите размеры" << endl;
	cout << "Количество строк: ";
	cin >> r;
	cout << "Количество столбцов: ";
	cin >> c;
	cout << "Число: ";
	cin >> N;
	cout << "Массив:" << endl;
	int** A = Array2d(r, c, 100);
	output(A, r, c);
	cout<<"Умноженная матрица"<<endl;
	int** B = EmptyArray2d(r, c);
	for (int k = 0; k < r; ++k) {
		for (int l = 0; l < c; ++l) {
			B[k][l] = A[k][l]*N;
		}
	}
	output(B, r, c);
	cleanArray2d(A, r);
	cleanArray2d(B, r);
}*/

//№9 Создание матрицы как результата сложения двух числовых матриц.
/*int main() {
	setlocale(LC_ALL, "Rus");
	int r, c;
	cout << "Введите размеры" << endl;
	cout << "Количество строк: ";
	cin >> r;
	cout << "Количество столбцов: ";
	cin >> c;
	cout << "Массив A:" << endl;
	int** A = Array2d(r, c, 100);
	output(A, r, c);
	cout << "Массив B:" << endl;
	int** B = Array2d(r, c, 100);
	output(B, r, c);
	cout << "Массив A+B:" << endl;
	int** C = EmptyArray2d(r, c);
	for (int k = 0; k < r; ++k) {
		for (int l = 0; l < c; ++l) {
			C[k][l] = A[k][l] + B[k][l];
		}
	}
	output(C, r, c);
	cleanArray2d(A, r);
	cleanArray2d(B, r);
	cleanArray2d(C, r);
}*/
	
//№10 Создание матрицы как результата умножения двух числовых матриц.
/*int main() {
	setlocale(LC_ALL, "Rus");
	int r, c1, c2;
	int sum = 0;
	cout << "Введите размеры" << endl;
	cout << "Количество строк А: ";
	cin >> r;
	cout << "Количество столбцов А: ";
	cin >> c1;
	cout << "Количество столбцов В: ";
	cin >> c2;
	cout << "Матрицв A:" << endl;
	int** A = Array2d(r, c1, 10);
	output(A, r, c1);
	cout << "Матрица B:" << endl;
	int** B = Array2d(c1, c2, 10);
	output(B, c1, c2);
	int** Bt = EmptyArray2d(c2, c1);// В транспонированная
	for (int k = 0; k < c2; ++k) {
		for (int l = 0; l < c1; ++l) {
			Bt[k][l] = B[l][k];
		}
	}
	cleanArray2d(B, c1);
	int** C = EmptyArray2d(r, c2);
	for (int k = 0; k < r; ++k) {// перебираю строки А
		for (int l = 0; l < c2; ++l) {// перебираю строки Вт
			for (int i = 0; i < c1; ++i) // перебираю элементы строки 
					sum += A[k][i] * Bt[l][i];
			C[k][l] = sum;
			sum = 0;
		}
	}
	cout << "Матрица A*B:" << endl;
	output(C, r, c2);
	cleanArray2d(A, r);
	cleanArray2d(Bt, c2);
	cleanArray2d(C, r);
}*/

//№11 Обмен местами двух строк/столбцов 2-массива.
/*int main() {
	setlocale(LC_ALL, "Rus");
	int k;
	cout << "1 - Обмен строк;" << endl << "2 - Обмен столбцов" << endl;
	cin >> k;
	int r, c, N1, N2;
	cout << "Введите размеры" << endl;
	cout << "Количество строк: ";
	cin >> r;
	cout << "Количество столбцов: ";
	cin >> c;
	cout << "Номер 1 ";
	cin >> N1;
	cout << "Номер 2 ";
	cin >> N2;
	cout << "Матрица:" << endl;
	int** A = Array2d(r, c, 100);
	output(A, r, c);
	if ((k == 1)& (N1<r)& (N2 < r)) {// обмен строк
		for (int i = 0; i < c; ++i) 
			swap(A[N1 - 1][i], A[N2 - 1][i]);
		cout << "Измененная матрица:" << endl;
		output(A, r, c);
	}
	if ((k == 2) & (N1 < c) & (N2 < c)) {// обмен столбцов
		for (int i = 0; i < r; ++i)
			swap(A[i][N1 - 1], A[i][N2 - 1]);
		cout << "Измененная матрица:" << endl;
		output(A, r, c);
	}
	else
		cout << "Ошибка" << endl;
	cleanArray2d(A, r);
}*/

//№12. Получение доступа по ссылке к элементу 2 - массива с заданными значениями строки и столбца.

int main() {
	setlocale(LC_ALL, "Rus");
	int r, c;
	cout << "Введите размеры" << endl;
	cout << "Количество строк: ";
	cin >> r;
	cout << "Количество столбцов: ";
	cin >> c;
	cout << "Массив A:" << endl;
	int** A = Array2d(r, c, 100);
	output(A, r, c);
	int row, colm;
	cout << "Адрес необходимого элемента" << endl;
	cout << "Строка: ";
	cin >> row;
	cout << "Столбец: ";
	cin >> colm;
	cout << getElement(A, row, colm);
}









