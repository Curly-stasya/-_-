<<<<<<< HEAD
﻿#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

//1.Count the smiley faces!
int countSmileys(std::vector<std::string> arr) {
    int count = 0;
    for (int i = 0; i < arr.size(); ++i) {
        if ((arr[i].size() == 2) && (arr[i][0] == ':' || arr[i][0] == ';') && (arr[i][1] == ')' || arr[i][1] == 'D'))
            ++count;
        if ((arr[i].size() == 3) && (arr[i][0] == ':' || arr[i][0] == ';') && (arr[i][1] == '-' || arr[i][1] == '~') && (arr[i][2] == ')' || arr[i][2] == 'D'))
            ++count;
    }
    return count;
}

//2.Bit Counting
unsigned int countBits(unsigned long long n) {
    int count = 0;
    while (n > 0) {
        if (n % 2 == 1) ++count;
        n /= 2;
    }
    return count;
}

//3.Find the missing term in an Arithmetic Progression
static long findMissing(std::vector<long> list) {
    long d1 = list[1] - list[0];
    long d2 = list[2] - list[1];
    long d;
    if (d1 == d2) d = d1;
    else if (d1 * 2 == d2) d = d1;
    else d = d2;
    for (int i = 1; i < list.size(); ++i) {
        if ((list[i - 1] + d) != list[i]) return list[i - 1] + d;
    }
    return list[0];
}

//4.Create Phone Number
std::string createPhoneNumber(const int arr[10]) {
    std::string str = "(";
    for (int i = 0; i < 10; ++i) {
        str += std::to_string(arr[i]);
        if (i == 2) str += ") ";
        if (i == 5) str += "-";
    }
    return str;
}

//5.Duplicate Encoder
std::string duplicate_encoder(const std::string& word) {
    std::string str = "";
    std::vector <char> l;
    std::string word2 = word;
    for (unsigned long i = 0; i < word2.size(); ++i) {
        if ((word2[i] > 64) && (word2[i] < 91)) word2[i] += 32;
        l.push_back(word2[i]);
    }
    for (unsigned long i = 0; i < word2.size(); ++i) {
        int count = 0;
        for (unsigned long j = 0; j < l.size(); ++j) {
            if (word2[i] == l[j]) ++count;
        }
        if (count > 1) str += ')';
        else str += '(';
    }
    return str;
}

//6.Sum of Digits / Digital Root
int digital_root(int n) {
    std::string str = std::to_string(n);
    int sum = 0;
    for (unsigned long i = 0; i < str.size(); ++i) sum += int(str[i]) - 48;
    while (sum >= 10) {
        int cursum = 0;
        str = std::to_string(sum);
        for (int i = 0; i < str.size(); ++i) cursum += int(str[i]) - 48;
        sum = cursum;
    }
    return sum;
}

//7.Tribonacci Sequence
std::vector<int> tribonacci(std::vector<int> signature, int n) {
    std::vector<int> result;
    if (n == 0) return {};
    else if (n < 3) {
        for (int i = 0; i < n; ++i)  result.push_back(signature.at(i));
        return result;
    }
    else {
        for (int i = 0; i < 3; ++i) result.push_back(signature.at(i));
        for (int i = 3; i < n; ++i) {
            result.push_back(result.at(i - 1) + result.at(i - 2) + result.at(i - 3));
        }
        return result;
    }
}

//8.Does my number look big in this?
bool narcissistic(int value) {
    std::string str = std::to_string(value);
    int a = str.size();
    int summ = 0;
    for (int i = 0; i < a; ++i) {
        summ += pow(int(str[i]) - 48, a);
    }
    if (summ == value) return true;
    else return false;
}

//9.1/n- Cycle
int cycle(int n) {
    if (n % 2 == 0 || n % 5 == 0) return -1;
    int len = 0;
    int ost = 1;
    while ((ost != 1 || len == 0)) {
        ost *= 10;
        ost %= n;
        ++len;
    }
    return len;
}

//10.A disguised sequence(I)
class HiddenSeq
{
public:
    static unsigned long long fcn(int n) {
        return std::pow(2, n);
    }
};


=======
﻿#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

//1.Count the smiley faces!
int countSmileys(std::vector<std::string> arr) {
    int count = 0;
    for (int i = 0; i < arr.size(); ++i) {
        if ((arr[i].size() == 2) && (arr[i][0] == ':' || arr[i][0] == ';') && (arr[i][1] == ')' || arr[i][1] == 'D'))
            ++count;
        if ((arr[i].size() == 3) && (arr[i][0] == ':' || arr[i][0] == ';') && (arr[i][1] == '-' || arr[i][1] == '~') && (arr[i][2] == ')' || arr[i][2] == 'D'))
            ++count;
    }
    return count;
}

//2.Bit Counting
unsigned int countBits(unsigned long long n) {
    int count = 0;
    while (n > 0) {
        if (n % 2 == 1) ++count;
        n /= 2;
    }
    return count;
}

//3.Find the missing term in an Arithmetic Progression
static long findMissing(std::vector<long> list) {
    long d1 = list[1] - list[0];
    long d2 = list[2] - list[1];
    long d;
    if (d1 == d2) d = d1;
    else if (d1 * 2 == d2) d = d1;
    else d = d2;
    for (int i = 1; i < list.size(); ++i) {
        if ((list[i - 1] + d) != list[i]) return list[i - 1] + d;
    }
    return list[0];
}

//4.Create Phone Number
std::string createPhoneNumber(const int arr[10]) {
    std::string str = "(";
    for (int i = 0; i < 10; ++i) {
        str += std::to_string(arr[i]);
        if (i == 2) str += ") ";
        if (i == 5) str += "-";
    }
    return str;
}

//5.Duplicate Encoder
std::string duplicate_encoder(const std::string& word) {
    std::string str = "";
    std::vector <char> l;
    std::string word2 = word;
    for (unsigned long i = 0; i < word2.size(); ++i) {
        if ((word2[i] > 64) && (word2[i] < 91)) word2[i] += 32;
        l.push_back(word2[i]);
    }
    for (unsigned long i = 0; i < word2.size(); ++i) {
        int count = 0;
        for (unsigned long j = 0; j < l.size(); ++j) {
            if (word2[i] == l[j]) ++count;
        }
        if (count > 1) str += ')';
        else str += '(';
    }
    return str;
}

//6.Sum of Digits / Digital Root
int digital_root(int n) {
    std::string str = std::to_string(n);
    int sum = 0;
    for (unsigned long i = 0; i < str.size(); ++i) sum += int(str[i]) - 48;
    while (sum >= 10) {
        int cursum = 0;
        str = std::to_string(sum);
        for (int i = 0; i < str.size(); ++i) cursum += int(str[i]) - 48;
        sum = cursum;
    }
    return sum;
}

//7.Tribonacci Sequence
std::vector<int> tribonacci(std::vector<int> signature, int n) {
    std::vector<int> result;
    if (n == 0) return {};
    else if (n < 3) {
        for (int i = 0; i < n; ++i)  result.push_back(signature.at(i));
        return result;
    }
    else {
        for (int i = 0; i < 3; ++i) result.push_back(signature.at(i));
        for (int i = 3; i < n; ++i) {
            result.push_back(result.at(i - 1) + result.at(i - 2) + result.at(i - 3));
        }
        return result;
    }
}

//8.Does my number look big in this?
bool narcissistic(int value) {
    std::string str = std::to_string(value);
    int a = str.size();
    int summ = 0;
    for (int i = 0; i < a; ++i) {
        summ += pow(int(str[i]) - 48, a);
    }
    if (summ == value) return true;
    else return false;
}

//9.1/n- Cycle
int cycle(int n) {
    if (n % 2 == 0 || n % 5 == 0) return -1;
    int len = 0;
    int ost = 1;
    while ((ost != 1 || len == 0)) {
        ost *= 10;
        ost %= n;
        ++len;
    }
    return len;
}

//10.A disguised sequence(I)
class HiddenSeq
{
public:
    static unsigned long long fcn(int n) {
        return std::pow(2, n);
    }
};


>>>>>>> 468c2a0c5b63bee118de2c6ddb5d7301cbea02b0
