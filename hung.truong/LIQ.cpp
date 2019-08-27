//
// Created by Hung Truong Q.B on 2019-08-15.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    int F[n];
    int result = 0;
    for (int i = 0; i < n; ++i) {
        F[i] = 0;
        for (int j = 0; j < i; ++j) {
            if (A[j] < A[i]) {
                F[i] = max(F[i], F[j]);
            }
        }
        F[i]++;
        result = max(result, F[i]);
    }
    cout << result;
    return 0;
}
