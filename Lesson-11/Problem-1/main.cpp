#include <iostream>
#include <string>

using namespace std;

void bit(int & n) {
    for(int i = 7; i >= 0; --i) {
        int k = (n >> i) & 1;
        cout << k;
    }
}

int main() {
    int n;
    cin >> n;
    bit(n);
}
