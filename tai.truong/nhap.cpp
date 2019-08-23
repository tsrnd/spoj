#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int a) {
     for (int i = 2; i <= sqrt(a); i++) {
    if (!(a % i)) {
      return 0;
    }
  }
  return 1;

}

int main() {
    int a, b; cin >> a >> b;
    for (; a <= b; a++) if (isPrime(a)) cout << a << '\n';
}
