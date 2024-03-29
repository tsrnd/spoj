#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::ios;
using std::max;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, m, i, j;

    cin >> n >> m;

    int* w = new int[n];
    int* v = new int[n];
    for (i = 0; i < n; i++) {
        cin >> w[i] >> v[i];
    }

    int** f = new int*[n];
    for (i = 0; i < n; i++) {
        f[i] = new int[m+1];
        f[i][0] = 0;
    }

    i = 0;
    for (j = 1; j <= m; j++) {
        if (w[i] <= j) {
            f[i][j] = v[i];
        } else {
            f[i][j] = 0;
        }
    }

    for (i = 1; i < n; i++) {
        for (j = 1; j <= m; j++) {
            if (w[i] <= j) {
                f[i][j] = max(v[i] + f[i-1][j-w[i]], f[i-1][j]);
            } else {
                f[i][j] = f[i-1][j];
            }
        }
    }

    cout << f[n-1][m];

    return 0;
}

/*
Input:
3 4
1 4
2 5
3 6
Output:
10
 */

/*
Input:
40 1000000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
100000000 100000000
Output:

 */
