#include <math.h>
#include <iostream>

using std::cin;
using std::cout;
using std::ios;

int ktnt(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    int t = static_cast<int>(sqrt(n));
    for (int i = 3; i <= t; i += 2) {
        if (n % i == 0) return 0;
    }

    return 1;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int a, b = 0;
    cin >> a >> b;

    if (a < 2) a = 2;
    if (a > b) return 0;
    if (a == 2) cout << 2;
    if (a % 2 == 0) a++;

    for (int i = a; i <= b; i += 2) {
        if (ktnt(i)) cout << i;
    }

    return 0;
}
