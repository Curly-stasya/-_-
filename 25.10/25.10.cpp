#include <iostream>
using namespace std;
//поиск максимального
/*int main() {
	int a[10];
	int max=-100000000;
	for (int i=0; i<10; ++i){
		a[i]=rand();
		if (a[i]>max)
			max=a[i];
		cout<<a[i]<<' ';
	}
	cout<<"max(a)= "<< max;
}*/

//вывод индексов минимальных
/*int main() {
	int a[10];
	int min=100000000;
	cout<<"Массив[";
	for (int i=0; i<10; ++i){
		a[i]=rand()%100;
		if (a[i]<min)
			min=a[i];

		cout<<a[i]<<' ';
	}
	cout<<"]"<<endl;
	cout<<"Минимальный элемент: "<<min << endl;
	cout<<"Индексы минимальных: ";
	for (int i=0; i<10; ++i){
		if (a[i]==min)
		cout<< i <<" ";
	}
}*/

//среднее арифметическое
/*int main() {
	int a[10];
	int sum=0;
	cout<<"Массив [";
	for (int i=0; i<10; ++i){
		a[i]=rand()%100;
		sum+=a[i];
		cout<<a[i]<<' ';
	}
	cout<<"]"<<endl;
	cout<<"Среднее аримфетическое: "<< sum/10<<endl;
}*/

//массив цифр в 16 системе счисления
/*int main() {
	const int s=1000;
	char a[s];
	char b[16]={'0','1','2','3','4','5','6','7','8','9','A','B', 'C' ,'D' ,'E' ,'F'};
	cout<<"Массив [";
	for (int i=0; i<s; ++i){
		a[i]=b[rand()%16];
		cout<<a[i]<<' ';
	}
	cout<<"]"<<endl;
}*/

//перевернутый массив
/*int main() {
	const int s=10;
	int a[s];
	int b[s];
	cout<<"Массив [";
	for (int i=0; i<s; ++i){
		a[i]=rand()%100;
		cout<<a[i]<<' ';
	}
	cout<<"]"<<endl;
	cout<<"Массив' [";
	for (int k=0; k<s; ++k){
		b[k]=a[s-k-1];
		cout<<b[k]<<' ';
	}
	cout<<"]"<<endl;
}*/

//распределение относительно ср.арифм.
/*int main() {
	const int s=10;
	int a[s];
	int sum, l =0;
	float sr=0;

	cout<<"Массив [";
	for (int i=0; i<s; ++i){
		a[i]=rand()%100;
		sum+=a[i];
		cout<<a[i]<<' ';
	}
	cout<<"]"<<endl;
	sr=float(sum)/s;
	cout<<"Среднее аримфетическое: "<<sr<<endl;
	for (int k=0; k<s; ++k){
		if (a[k]>sr){

			while
		}
	}

}*/

//чаще всего встречающийся элемент
/*int main() {
	const int s=400;
	int a[s];
	int min=10000;
	int minl=0;
	cout<<"Массив [";
	for (int i=0; i<s; ++i){
		a[i]=rand()%30;
		cout<<a[i]<<' ';
	}
	cout<<"]"<<endl;
	for (int k=0; k<s-1; ++k){
		minl=k;
		for(int l=k+1; l<s; ++l){
			if (a[l]<=a[minl]){
				minl=l;
			}
		}
		swap(a[k], a[minl]);
	}
	cout<<"Оттсортированный массив [";
	for (int p=0; p<s; ++p){
		cout<<a[p]<<' ';
	}
	cout<<"]"<<endl;

	int maxk=0;
	int el;
	int kol=1;
	for (int n=0; n<s-1; ++n){
		if (a[n]==a[n+1]){
			++kol;
			if (kol>maxk){
				el=a[n];
				maxk=kol;
			}
		}
		else{
			kol=1;
		}
	}
	cout<<"Чаще всего встречается: "<< el;
}*/
