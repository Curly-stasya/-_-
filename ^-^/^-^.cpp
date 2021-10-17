//координаты
/*#include <iostream>
using namespace std;

int main() {
  int Ax, Ay, Bx,By,Cx,Cy;
  int k1=0;
  int k2=0;
  cin >> Ax >> Ay >> Bx >> By >>Cx >>Cy;
  k1=(Cx -Ax)*(Cx -Ax) + (Cy-Ay)*(Cy-Ay);
  k2=(Cx -Bx)*(Cx -Bx) + (Cy-By)*(Cy-By);
  if ((k1+k2-10)*(k1+k2-10)== 4*k1*k2)
    cout << "True";
  else
    cout << "False";
}*/

//внутри кружочка
/*#include <iostream>
using namespace std;

int main() {
  int R;
  int sum=0;
  cin >> R;
  for (int x=-R; x<=R; ++x){
    for (int y=-R; y<=R; ++y){
      if (x*x + y*y<=R*R)
        sum+=1;
    }
  }
cout << sum;
}
*/

//лапки
/*#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;
  int g=0;
  a=a*2;
  g=(a%4)/2;
  for (int k=a/4;k>=0; --k){
    cout<< "(k= " << k << ", g= " << g << endl;
    g+=2;
  }
}

*/

//cинусы
/*include <iostream>
#include <complex>
using namespace std;

int main() {
  int n,x;
  cin >> n >> x;
  double sinn=sin(x);
  double S=sinn;
  for (int i=1; i<=n; ++i){
    sinn=sin(sinn);
    S+=sinn;
  }
  cout<<S;
}

*/

//круг в квадрате, пи
/*#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;
  float R= a/2;
  double x,y;
  int kr, nekr =0;
  double s=0.0;
  double pi=0.0;
  int n= 1000000;
  for (int i=0;i<n;++i){
    x=rand();
    y=rand();
    x=x*R/RAND_MAX;
    y=y*R/RAND_MAX;
    if (x*x + y*y <= R*R){
      kr+=1;
    } else { nekr+=1;
    }
  }
  s=(double)R*R*kr/(kr+nekr);
  pi=4*s/(R*R);
  cout<<pi;
}
*/

//Тейлор
/*
#include <iostream>
#include <cmath>
using namespace std;

long int factorial(int a){
  int result;
    if (a==0 || a==1)
      return 1;
    result= a*factorial(a-1);
    return result;
}
int main(){
  int x,n;
  cin >> x >> n;
  double summ=0;
  for(int i=1; i<=n;++i){
    summ+=(pow(-1, i-1))*pow(x, 2*i-1)/factorial(2*i-1);
  }
  cout<<summ;
}*/

//сумма и произведение цифр
/*#include <iostream>
using namespace std;
int main() {
    int x;
    int summ = 0;
    int pr = 1;
    cin >> x;
    while (x > 0) {
        summ += x % 10;
        pr *= x % 10;
        x /= 10;
    }
    cout << "summ = " << summ << " pr = " << pr;
}
*/
