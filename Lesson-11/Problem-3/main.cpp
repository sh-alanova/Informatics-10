#include <iostream>
#include <cmath>

using namespace std;

void digits(int & n) {
    int count = 0, tmp = n;
    while(tmp > 0) {
        tmp /= 10;
        ++count;
    }
    while(n > 0) {
        int digit = n / (int)pow(10, count-1);
        cout << digit << endl;
        n -= digit * (int)pow(10, count-1);
        --count;
    }
}

int main() {
    int n;
    cin >> n;
    digits(n);
}
