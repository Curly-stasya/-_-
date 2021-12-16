#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//1.Reverse words
string reverse_words(string str) {
    str += ' ';
    string str2 = "";
    string total = "";
    int l = str.length();
    for (int i = 0; i < l; ++i) {
        if (str[i] != ' ')
            str2 += str[i];
        else {
            reverse(str2.begin(), str2.end());
            total += str2;
            total += ' ';
            str2 = "";
        }
    }
    return total.substr(0, l - 1);
}

//2.Get the Middle Character
string get_middle(string input) {
    int l = input.length();
    string a = "";
    if (l % 2 != 0) a += input[l / 2];
    else {
        a += input[(l / 2) - 1];
        a += input[l / 2];
    }
    return a;
}

//3.Exes and Ohs
bool XO(const string& str) {
    int x = 0;
    int o = 0;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == 'x' || str[i] == 'X') ++x;
        if (str[i] == 'o' || str[i] == 'O') ++o;
    }
    if (x == o) return true;
    else return false;
}

//4.Complementary DNA
string DNAStrand(const string& dna) {
    string dna2 = "";
    for (int i = 0; i < dna.size(); ++i) {
        switch (dna[i]) {
        case 'A': dna2 += 'T'; break;
        case 'T': dna2 += 'A'; break;
        case 'G': dna2 += 'C'; break;
        case 'C': dna2 += 'G'; break;
        }
    }
    return dna2;
}

//5.Isograms
bool is_isogram(string str) {
    std::string buf = "";
    for (unsigned int i = 0; i < str.length(); ++i) {
        char a;
        if (str[i] < 91) a = str[i] + 32;
        else a = str[i] - 32;
        if ((buf.find(str[i]) == string::npos) && (buf.find(a) == string::npos))
            buf += str[i];
    }
    if (buf == str) return true;
    else return  false;
}

//6.Shortest Word
int find_short(string str) {
    str += " ";
    int minl = 10000;
    int len = 0;
    for (unsigned long i = 0; i < str.length(); ++i) {
        if (str[i] != ' ')
            ++len;
        else {
            if (len < minl) minl = len;
            len = 0;
        }
    }
    return minl;
}

//7.Are the numbers in order?
bool isAscOrder(vector<int> arr) {
    int flag = 0;
    for (int i = 0; i < arr.size() - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            flag = 1;
            break;
        }
    }
    if (flag == 0) return true;
    else return false;
}

//8.Sum of two lowest positive integers
long sumTwoSmallestNumbers(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    return numbers[0] + numbers[1];
}

//9.Anagram Detection
bool isAnagram(string test, string original) {
    char a;
    for (unsigned int i = 0; i < test.length(); ++i) {
        if (test[i] < 91) a = test[i] + 32;
        else a = test[i] - 32;
        if ((original.find(test[i]) == string::npos) && (original.find(a) == string::npos)) {
            return false;
            break;
        }
        if (original.find(test[i]) != string::npos)
            original.erase(original.find(test[i]), 1);
        else if (original.find(a) != string::npos)
            original.erase(original.find(a), 1);
    }
    if (original.length() == 0) return true;
    else return false;
}

//10.You're a square!
bool is_square(int n) {
    int flag = 0;
    if (n >= 0) {
        for (int i = 0; i <= n; ++i) {
            if (i * i == n) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) return false;
        else return true;
    }
    else return false;
}





