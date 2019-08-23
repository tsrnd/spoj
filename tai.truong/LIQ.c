#include <stdio.h>

#define MAX 1000

int main() {
  int A[MAX], LEN[MAX];
  int i, j, n, k;
  do {
    scanf("%d", & n);
  } while (n < 0 || n > MAX);
  for (i = 0; i < n; i++) {
    scanf("%d", & A[i]);
  }
  for (i = 0; i < n; i++) {
    LEN[i] = 1;
    for (j = 0; j < i; j++) {
      if (A[i] > A[j]) {
        if (LEN[j] + 1 > LEN[i]) {
          LEN[i] = LEN[j] + 1;
        }
      }
    }
    if (LEN[i] > k) {
      k = LEN[i];
    }
  }
  printf("%d", k);

  return 0;
}