#include <iostream>
using namespace std;

bool isPrime(int a) {
    if (a < 2) return false;
    if (a == 2) return true;
    if (a % 2 == 0) return false;
    for (int i = 3; i * i <= a; i += 1) if (a % i == 0) return false;
    return true;
}

int main() {
    int a, b; cin >> a >> b;
    for (; a <= b; a++) if (isPrime(a)) cout << a << '\n';
}
