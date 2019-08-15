#include <iostream>
#include <math.h>
using namespace std;

int ktnt(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    int t = (int)sqrt(n);
    for (int i = 3; i <= t; i += 2) {
        if (n % i == 0) return 0;
    }

    return 1;
}

int main() {
    int a, b = 0;
    cin >> a >> b;

    if (a < 2) a = 2;
    if (a > b) return 0;
    if (a == 2) printf("2\n");
    if (a % 2 == 0) a++;

    for (int i = a; i <= b; i += 2) {
        if (ktnt(i)) printf("%i\n", i);
    }

    return 0;
}
