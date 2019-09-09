#include <iostream>
using namespace std;

#define N 30000
#define MAX 10000
#define NOT_FOUND INT_MAX

int n;

int *int_1d(int n) {
    int* f = new int[n];
    for(int i = 0; i < n; i++) {
        f[i] = 0;
    }
    return f;
}

long *long_1d(int n) {
    long* f = new long[n];
    for(int i = 0; i < n; i++) {
        f[i] = 0;
    }
    return f;
}

int find(long b[], int l, int r, long x) {
    if (l > r) return NOT_FOUND;

    int m = (l+r)/2;
    long val = b[m];
    if (val > x) return m;

    if (val > x) {
        m = find(b, l, m-1, x);
        if (m != NOT_FOUND) return m;
    } else {
        m = find(b, m+1, r, x);
        if (m != NOT_FOUND) return m;
    }

    return NOT_FOUND;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;

    long* s = long_1d(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int* k = int_1d(n);
    k[0] = 1; int mk = 1;
    long* b = long_1d(N+2);
    b[0] = 0; b[1] = s[0]; b[N+1] = LONG_MAX;

    for (int i = 1; i < n; i++) {
        int j = find(b, 0, mk, s[i]);
        if (j == NOT_FOUND) {
            s[j] = 1;
            b[1] = s[i];
            continue;
        }
        k[i] = k[j];
        b[k[i]] = i;
        if (k[i] > mk) mk = k[i];
    }

    cout << mk;

    return 0;
}

/*

i   :   0   1   2   3   4   5   6   7   8
s   :   1   2   3   4   9   10  5   6   7

b
i=0 :   1
i=1 :   1   2
i=2 :   1   2   3
i=3 :   1   2   3   4
i=4 :   1   2   3   4   9
i=5 :   1   2   3   4   9   10
i=6 :   1   2   3   4   5   10
i=7 :   1   2   3   4   5   6
i=8 :   1   2   3   4   5   6   7

 */

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