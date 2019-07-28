#include <iostream>

using namespace std;

void defis(int & n) {
    for(int i = 0; i < n; ++i) {
        cout << "-";
    }
}

int main() {
    int n;
    cin >> n;
    defis(n);
}

