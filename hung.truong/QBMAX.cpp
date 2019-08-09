//
// Created by Hung Truong Q.B on 2019-08-08.
//
#include <iostream>
#include <climits>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int A[m + 2][n + 2];
    for (int i = 0; i <= m + 1; ++i) {
        for (int j = 0; j <= n + 1; ++j) {
            int input;
            if (i == 0 || i == m + 1 || j == 0 || j == n + 1) {
                input = INT_MIN;
            } else {
                cin >> input;
            }
            A[i][j] = input;
        }
    }
    for (int j = 2; j <= n; ++j) {
        for (int i = 1; i <= m; ++i) {
            A[i][j] += max(A[i - 1][j - 1], max(A[i][j - 1], A[i + 1][j - 1]));
        }
    }
    int result = INT_MIN;
    for (int i = 1; i <= m; ++i) {
        result = max(result, A[i][n]);
    }
    cout << result;
    return 0;
}
