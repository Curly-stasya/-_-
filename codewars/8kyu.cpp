#include <iostream>
#include <string>
using namespace std;

//1.Кузнечик
int summation(int num) {
    int count = 1;
    int summ = 0;
    while (count <= num) {
        summ += count;
        ++count;
    }
    return summ;
}
//2.Базовые операции
int basicOp(char op, int val1, int val2) {
    if (op == '+') return val1 + val2;
    if (op == '-') return val1 - val2;
    if (op == '*') return val1 * val2;
    if (op == '/') return val1 / val2;
}

//3.Век из года
int centuryFromYear(int year) {
    if (year % 100 > 0) return (year / 100) + 1;
    else return year / 100;
}

//4.Чет/нечет
string even_or_odd(int number) {
    if (number % 2 == 0) return "Even";
    else return "Odd";
}

//5.Перевернутая строка
string reverseString(string str) {
    string str2 = "";
    for (int i = str.size() - 1; i >= 0; --i) {
        str2 += str[i];
    }
    return str2;
}

//6.Строка без пробелов
string no_space(string x) {
    string y = "";
    for (int i = 0; i < x.size(); ++i) {
        if (x[i] != ' ')
            y += x[i];
    }
    return y;
}

//7.Перевод числа в строку
string number_to_string(int num) {
    return to_string(num);
}

//8.Противоположное число
int opposite(int number)
{
    return number - 2 * number;
}

//9.Пeревод булевых значений в 'Yes'/'No'
string bool_to_word(bool value) {
    if (value == true) return "Yes";
    else return "No";
}

//10.В два раза старше
int twice_as_old(int dad, int son) {
    int dad1 = dad - son;
    int son1 = 0;
    while (dad1 != 2 * son1) {
        ++dad1;
        ++son1;
    }
    if (dad1 > dad) return dad1 - dad;
    else return dad - dad1;
}

