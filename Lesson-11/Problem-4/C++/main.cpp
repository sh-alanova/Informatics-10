#include <iostream>

using namespace std;

int roman2int(int & n) {
    if(n / 1000 >= 1) {
        int tmp = n / 1000;
        while(tmp > 0) {
            cout << "M";
            --tmp;
        }
    }
    n %= 1000;
    if(n / 900 == 1) {
        cout << "CM";
    }
    n %= 900;
    if(n / 500 == 1) {
        cout << "D";
    }
    n %= 500;
    if(n / 400 == 1) {
        cout << "CD";
    }
    n %= 400;
    if(n / 100 >= 1) {
        int tmp = n / 100;
        while(tmp > 0) {
            cout << "C";
            --tmp;
        }
    }
    n %= 100;
    if(n / 90 == 1) {
        cout << "XC";
    }
    n %= 90;
    if(n / 50 == 1) {
        cout << "L";
    }
    n %= 50;
    if(n / 40 == 1) {
        cout << "XL";
    }
    n %= 40;
    if(n / 10 >= 1) {
        int tmp = n / 10;
        while(tmp > 0) {
            cout << "X";
            --tmp;
        }
    }
    n %= 10;
    if(n / 9 == 1) {
        cout << "IX";
    }
    n %= 9;
    if(n / 5 == 1) {
        cout << "V";
    }
    n %= 5;
    if(n / 4 == 1) {
        cout << "IV";
    }
    n %= 4;
    int tmp = n;
    while(tmp > 0) {
        cout << "I";
        --tmp;
    }
}


int main() {
    int n;
    cin >> n;
    roman2int(n);
}


