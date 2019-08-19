#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int n;
 
  cin >> n;
  int A[n];
  int result = 0;
  int length[n];

  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < n; i++) {
    length[i] = 1;
    for (int j = 0; j < i; j++) {
      if (A[j] < A[i] && length[j] + 1 > length[i]) {
        length[i]++;
      }
    }
    if (result < length[i]) {
      result = length[i];
    }
  }
  cout << result;
}
