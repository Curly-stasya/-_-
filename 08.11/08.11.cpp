#include <iostream>
using namespace std;

//динамическое заполнение 1мерного массива
/*int main() {
	setlocale(LC_ALL, "Rus");
	cout<< "Массив:";
	int N,n;
	cin>>N>>n;
	int * a = new int[N];
	for (int i=0; i<N; ++i){
		a[i]=n+i;
		cout<<a[i]<<' ';
	}
	delete[] a;
}*/


//динамическое заполнение 2мерного массива
//змейка
/*int main() {
	setlocale(LC_ALL, "Rus");
	int N,m,n;
	cin>>N>>m>>n;
	cout<< "Массив:"<< endl;
	int **A = new int *[m];
	for (size_t k=0; k<n;++k){
		A[k]=new int [n];
		if (k%2==0){
			for (int l=0; l<n;++l){
				A[k][l]=N;
				++N;
			}
		}
		if (k%2!=0){
			for (int p=n-1; p>=0;--p){
				A[k][p]=N;
				++N;
			}
		}
	}
	for (size_t i=0; i<m; ++i){
		for (size_t j=0; j<n; ++j){
			//cout<<A[i][j]<<' ';
			cout.width(7); cout << left <<A[i][j] ;
		}
		cout<<endl;
	}
	for (int i=0; i<m; ++i){
		delete[] A[i];
	}
	delete [] A;
}*/

//диагональка
/*void diag(int** A, int row, int colm, int start1) {
	int count_diag = row + colm - 1;
	for (int p = 1; p <= count_diag; ++p) {
		for (int i = 0, j = p - 1; i < p; ++i, --j) {
			if (p % 2 == 0) {
				if (i < row && j < colm) {
					A[i][j] = start1++;
				}
				else {
					continue;
				}
			}
			else {
				if (j < row && i < colm) {
					A[j][i] = start1++;
				}
				else {
					continue;
				}
			}
		}
	}
}
int main() {
	setlocale(LC_ALL, "Rus");
	int r, c, N;
	cin >> r >> c >> N;
	cout << "Массив:" << endl;
	//создание массива
	int** A = new int* [r];
	for (size_t k = 0; k < r; ++k) {
		A[k] = new int[c];
	}
	diag(A, r, c, N);

	for (int i = 0; i < r; ++i) {//вывод массива
		for (int j = 0; j < c; ++j) {
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < r; i++) {//очищение памяти
		delete[] A[i];
	}
	delete[] A;
}*/


//улиточка
/*int main() {
	setlocale(LC_ALL, "Rus");
	int N, r, c;
	cin >> N >> r >> c;
	int s1 = c;
	int s3 = r;
	int s2 = 0;
	int s4 = 0;
	cout << "Массив:" << endl;
	//создание массива
	int** A = new int* [r];
	for (size_t k = 0; k < r; ++k) {
		A[k] = new int[c];
	}
	// Заполение массива
	while ((s2<s3-1)&&(s4<s1-1)) {
			for (int l = s4; l < s1 ; ++l) {//верхняя строка
				A[s2][l] = N;
				++N;
			}
			for (int m = s2+1; m < s3 - 1; ++m) {//правый столбик
				A[m][s1-1] = N;
				++N;
			}
			for (int n = s1 - 1; n > s4; --n) {//нижняя строка
				A[s3 - 1][n] = N;
				++N;
			}
			for (int p = s3 - 1; p > s2; --p) {//левый столбик
				A[p][s4] = N;
				++N;
			}
			++s2;
			++s4;
			--s1;
			--s3;	
	}
	if (s2 >= s3 - 1) {//1 строка
		for (int t = s4; t < s1; ++t) {
			A[s2][t] = N;
			++N;
			cout<<"["<<s2<<"][" << t<<"]"<<endl;
		}
	}
	if (s4 >= s1 - 1) {
		for (int m = s2; m < s3 ; ++m) {//1 столбик
			A[m][s4] = N;
			++N;
			cout<<"["<<m<<"][" << s4 <<"]"<<endl;
		}
	}
	for (int i = 0; i < r; ++i) {//вывод массива
		for (int j = 0; j < c; ++j) {
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < r; i++) {//очищение памяти
		delete[] A[i];
	}
	delete[] A;
}
}*/
