//
// Created by Hung Truong Q.B on 2019-08-08.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    auto isPrime = [](int x) -> bool {
        for (int i = 3; i <= sqrt(x); i++) {
            if (x % i == 0) {
                return false;
            }
        }
        return true;
    };

    if (a <= 1) {
        cout << 2 << endl;
        a = 3;
    }
    for (int i = a; i <= b; i += 2) {
        if (isPrime(i)) {
            cout << i << endl;
        }
    }
    return 0;
}
