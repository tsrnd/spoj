#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num) {
  // if (num == 1) return false;

  for (int i = 2; i <= sqrt(num); i++) {
    if (!(num % i)) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int num1, num2;
  cin >> num1 >> num2;
  for (int i = num1; i <= num2; i++) {
    if (isPrime(i)) {
      cout << i << " ";
    }
  }
  return 0;
}
