#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	//заполнение матрицы
	const int s1 = 15;
	const int s2 = 20;
	int a[s1][s2];
	int b[s1][s2];
	cout << "Матрица: " << endl;
	for (int i = 0; i < s1; i++) {
		for (int j = 0; j < s2; j++) {
			a[i][j] = rand() % 10;
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}

	cout << "Интегральное изображение: " << endl;
	//интегральная матрица изображения
	b[0][0] = a[0][0];
	for (int k = 1; k < s1; k++) {
		b[k][0] = b[k - 1][0] + a[k][0];
	}
	for (int l = 1; l < s2; l++) {
		b[0][l] = b[0][l - 1] + a[0][l];
	}
	for (int k = 1; k < s1; k++) {
		for (int l = 1; l < s2; l++) {
			b[k][l] = a[k][l] + b[k - 1][l] + b[k][l - 1] - b[k - 1][l - 1];
		}
	}
	for (int i = 0; i < s1; i++) {
		for (int j = 0; j < s2; j++) {
			cout << b[i][j] << ' ';
		}
		cout << endl;
	}

	//поиск элемента	
	int n, O;
	int flag = 0;
	cin >> n;
	for (int i = 0; i < s1 - 1; i++) {// проверка диагонали
		if ((b[i][i] < n) & (b[i + 1][i + 1] > n))
			O = i + 1;
		if (b[i][i] == n) {
			flag = 1;
			cout << "Число найдено. Его место [" << i + 1 << "][" << i + 1 << "]" << endl;
			break;
		}
	}
	for (int k = 0; k < O; k++) { //поиск в верхнем левом прямоугольнике
		for (int l = O; l < s2; l++) {
			if (b[k][l] == n)
				flag = 1;
			if (flag == 1) {
				cout << "Число найдено. Его место [" << k + 1 << "][" << l + 1 << "]" << endl;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	if (flag == 0)
		for (int k = O; k < s1; k++) { //поиск в нижнем левом прямоугольнике
			for (int l = 0; l < O; l++) {
				if (b[k][l] == n) {
					flag = 1;
					if (flag == 1) {
						cout << "Число найдено. Его место [" << k + 1 << "][" << l + 1 << "]" << endl;
						break;
					}
				}
			}
			if (flag == 1)
				break;
		}

	if (flag == 0)
		cout << "Введенное число не найдено";
}