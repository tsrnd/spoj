#include <iostream>
using namespace std;

#define N 1000
#define MAX 10000

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, i, j;
    cin >> n;

    int s[N] = {};
    for (i = 0; i < n; i++) {
        cin >> s[i];
    }

    int k[N], mk = 0;
    for (i = 0; i < n; i++) {
        k[i] = 1;
        for (j = 0; j < i; j++) {
            if (s[j] < s[i] && k[j] + 1 > k[i]) {
                k[i] = k[j] + 1;
            }
        }
        if (k[i] > mk) mk = k[i];
    }

    cout << mk;

    return 0;
}

/*
Input:
6
1 2 5 4 6 2
Output:
4
 */

/*
Input:
9
1 2 3 4 9 10 5 6 7
Output:
7
 */

/*
Input:
11
1 2 3 8 9 4 5 6 20 9 10
Output:
8
 */