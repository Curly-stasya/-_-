/*#include <iostream>
using namespace std;

int main(){
	unsigned long long n=1;
	double summ=0;
	int k=0;
	while (n<2*64){
		summ+= 1.0 /(n*n);

		if (1.0/(n*n)==0)
			cout <<"!!!";
		++k;
		++n;
	}
	cout<< "summ = " << summ <<", k = "<< k;
	while (n*n <2*64){
		cout<< "1/n^2 = " << 1.0/(n*n) <<", 1/n * 1/n = "<< (1.0/n)*(1.0/n)<< ", n = " << n << endl;
		++n;
	}*/


	//период времени
	/*#include <iostream>
	using namespace std;

	int main(){
		int h, min, sec, t, t1, t2 =0;
		int h1, min1,sec1;
		cout<<"Time1: ";
		cin >> h1>> min1>> sec1;
		int h2, min2,sec2;
		cout<<"Time2: ";
		cin >> h2>> min2>> sec2;
		t1=sec1+60*min1+3600*h1;
		t2=sec2+60*min2+3600*h2;
		if (t2>t1){
			t=t2-t1;
		}
		else{
			t=24*3600-t1+t2;
		}
		h=t/3600;
		min=(t%3600)/60;
		sec=t%60;
		cout << h<<":"<<min<<":"<<sec;
	}*/


	//возраст в днях
	/*#include <iostream>
	using namespace std;
	int kd(int a);

	int main(){
		int v, D =0;
		int d,m,y;
		cout<<"Date of birth:";
		cin>> d >> m >> y;
		int d2,m2,y2;
		cout<<"Current date:";
		cin>> d2 >> m2 >> y2;
		for(int i=y;i<y2-1; ++i){
			if ((i%4==0 && i%100!=0)|| i%400==0)
				++v;
		}
		D+=(kd(m)-d +1);
		d=1;
		if (m==12){
			m=1;
			y++;
		}
		else
			m++;

		if (m<m2){
			D+=((y2-y)*365 + v);
			y=y2;
			for (int i=m; i<m2;++i){
				D+=kd(i);
				m++;
			}
			D+=(d2-1);
			d+=(d2-1);
		}
		if ((m>m2)&(y2-y>1)){
			int a=m;
			D+=((y2-1-y)*365 +v);
			for (int i = 0;i<(12-a+m2); ++i){
				D+=kd(m);
				if (m==12){
					y++;
					m++;
				}
				else
					m++;
				}

			}
			D+=(d2-1);
			d+=(d2-1);

		if (((y2%4==0 && y2%100!=0)|| y2%400==0)&(m2>2))
			D++;
		cout<<D;
	}
	int kd(int a){
		if (a==1||a==3||a==5||a==7||a==8||a==10||a==12)
			return 31;
		if (a==4||a==6||a==9||a==11)
			return 30;
		if (a==2)
			return 28;
	}
	*/

	//перевод из десятичной в римскую
	/*#include <iostream>
	#include <string>
	using namespace std;

	int main(){
		string ost_10[10]={"","I","II","III","IV","V","VI","VII","VII","IX"};
		string ost_100[10]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
		string ost_1000[10]= {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
		string ost_10000[10]= {"","M","MM","MMM","M'V'", "'V'","'V'M", "'V'MM", "'V'MMM","M'X'"};
		int a;
		cin>> a;
		int b,c,d,e=0;
		int dt=10000;
		int t=1000;
		int s=100;
		int des=10;

		b=(a%dt - a%t)/t;
		c=(a%t - a%s)/s;
		d=(a%s- a%des)/des;
		e=a%des;
		cout<<ost_10000[b]<<ost_1000[c]<<ost_100[d]<<ost_10[e];
	}*/


	//день недели по дате
	/*#include <iostream>
	#include <string>
	using namespace std;

	int main(){
		int d,m,y =0;
		int wd, cy, cm1, cm2;
		cout << "Date:";
		cin >> d >> m >> y;

		cm1 = (14 - m) / 12;
		cm2 = m + (12 * cm1) - 2;
		cy = y - cm1;
		wd = d + cy + (cy / 4) - (cy / 100) + (cy / 400) + ((31 * cm2) / 12);

		string wdname[7]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
		cout<<wdname[wd%7];
	}*/