#include <iostream>
#include <fstream>
#include <bitset>
#include "Array_lib.h"
using namespace std;


//СОЗДАНИЕ И ОТКРЫТИЕ ФАЙЛА

/*int main() {
	fstream file;
	file.open("test", ios_base::out|ios_base::trunc);
	if (file.is_open()) {
		file << "!!!" << endl;
		file.close();
	}
}*/

//	КОПИРОВАНИЕ ОДНОГО ФАЙЛА В ДРУГОЙ

/*int main() {
	//Открываем файл для чтения
	char src_file_name[256], dest_file_name[256];
	cout << "Откуда копировать: ";
	cin.getline(src_file_name, 256);
	ifstream inFile(src_file_name, ios_base::binary);// Открыли файл в двоичном коде
	if (!inFile) {
		cout << "Невозможно открыть файл-источник " << src_file_name << endl; 
		return 1;
	}

	//Открываем файл для записи
	cout << "Куда копировать: ";
	cin.getline(dest_file_name, 256);
	ofstream outFile(dest_file_name, ios_base::binary);// Открыли файл в двоичном коде
	if (!outFile) {
		cout << "Невозможно открыть файл назначения " << dest_file_name << endl;
		inFile.close();
		return 2;
	}
	//Копирование данных
	int ch;
	unsigned int count = 0;
	while ((ch = inFile.get()) != EOF) {// Беру символ из копируемого файла и проверяю не является ли он концом этого файла
		outFile.put(ch);// Закидываю символ в новый файл
		++count;
	}
	cout << "Скопировано " << count << "байтов" << endl;
	inFile.close();
	outFile.close();
	return 0;
}*/


//ВЫВОД ДВУМЕРНОГО МАССИВА В ФАЙЛ
/*int main() {
	setlocale(LC_ALL, "Rus");
	int r, c;
	std::cout << "Введите размеры" << endl;
	cout << "Количество строк: ";
	cin >> r;
	cout << "Количество столбцов: ";
	cin >> c;
	//создание массива
	int** A = Array2d(r, c, 100);
	output(A, r, c);//вывод в консоль
	fstream file3;
	file3.open("1.txt");
	if (file3.is_open()) {
		cout << "file in ok" << endl;
		//file3 << r << endl;
		//file3 << c << endl;
		for (int i = 0; i < r; ++i) {//Отправление массива в файл
			for (int j = 0; j < c; ++j) {
				file3 << A[i][j] << '\t';
			}
			file3 << "\n";
		}
		file3.close();
	}
	else cout << "not ok" << endl;;
	cleanArray2d(A, r);

	//Вывод массива из файла в консоль
	cout << "Array from file: " << endl;
	file3.open("1.txt", ios_base::in); //файл для получения информации
	if (file3.is_open()) {
		cout << "ok" << endl;
		while (!file3.eof()) {//Получение массива из файла
			char c = file3.get();
			cout << c ;
		}
		file3.close();
	}
}*/

//ВЫВОД ЧЕРЕЗ ЗВЕЗДОЧКИ И ПРОБЕЛЫ
void createPicture(const char src_file_name[256], const char dest_file_name[256], int rows, int cols)
{
	ifstream data_f(src_file_name, ios_base::in | ios_base::binary);
	ofstream picture_f(dest_file_name, ios_base::out);
	if (data_f && picture_f){
		unsigned char ch;
		while (data_f.peek() != EOF){
			ch = data_f.get();
			if (ch == 10) {
				picture_f << endl;
			}
			else{
				bitset<8> bin(ch);
				for (int i = 7; i >= 0; i--){
					if (bin[i] == 1) picture_f << '*';
					else picture_f << ' ';
				}
			}
		}
	}
	else cout << "Error" << endl;
	data_f.close();
	picture_f.close();
}
int main() {
	setlocale(LC_ALL, "Rus");
	char src_file_name[256], dest_file_name[256];

	cout << "Исходный файл: ";
	cin.getline(src_file_name, 256);
	cout << "Куда вывести картинку: ";
	cin.getline(dest_file_name, 256);
	
	int r, c;
	cout << "Размеры картинки: " << endl;
	cin >> r >> c;

	createPicture(src_file_name, dest_file_name, r, c);
}
