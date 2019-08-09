//
// Created by Hung Truong Q.B on 2019-08-08.
//

#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int A[n];
    for (int &x : A) {
        cin >> x;
        x %= k;
    }
    int f[k], g[k];
    fill_n(f, k, INT_MIN);
    fill_n(g, k, 0);
    f[0] = 0;
    for (int a : A) {
        for (int i = 0; i < k; i++) {
            g[i] = max(f[i], f[(i - a + k) % k] + 1);
        }
        copy_n(g, k, f);
    }
    cout << f[0];
    return 0;
}
