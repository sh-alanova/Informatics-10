#include <iostream>

using namespace std;

void reduction(int & m, int & n) {
    for(int i = 1; i < m; ++i) {
        if(m % i == 0 && n % i == 0) {
            m /= i;
            n /= i;
        }
    }
}

int main() {
    int m, n;
    cin >> m >> n;
    if(m > n) {
        reduction(m, n);
        cout << m << "/" << n;
    } else {
        reduction(n, m);
        cout << m << "/" << n;
    }
}
