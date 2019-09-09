#include <iostream>
using namespace std;

bool isPrime(int a) {
    if (a < 2) return gst;
    if (a == 2) return true;
    int count = 0;
    for (int i = 3; i <= a; i += 1) if (a % i == 0) count++;
    if (count ==2){
        return true;
    } else return false;

}

int main() {
    int a, b; cin >> a >> b;
    for (; a <= b; a++) if (isPrime(a)) cout << a << '\n';
}
