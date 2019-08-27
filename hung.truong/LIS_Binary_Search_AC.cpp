//
// Created by Hung Truong Q.B on 2019-08-16.
//
#include <iostream>

using namespace std;

int INF = 1e9;

int binarySearch(int *B, int left, int right, int a) {
    int mid = (left + right) / 2;
    if (left <= right) {
        if (B[mid] >= a) {
            return binarySearch(B, left, mid - 1, a);
        } else {
            return binarySearch(B, mid + 1, right, a);
        }
    }
    return left;
}

int main() {
    int n;
    scanf("%d", &n);
    int A[n];
    int B[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &A[i]);
        if (i == 0) {
            B[0] = -INF;
        } else {
            B[i] = INF;
        }
    }
    int result = 0;
    for (int a: A) {
        int k = binarySearch(B, 0, n, a);
        B[k] = a;
        if (result < k) {
            result = k;
        }
    }
    printf("%d", result);
    return 0;
}
