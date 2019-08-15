#include <iostream>
using namespace std;

#define N 1000
#define MAX 10000

int main() {
    int n;
    cin >> n;

    int s[N];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int len[N], k = 0;
    for (int i = 0; i < n; i++) {
        len[i] = 1;
        for (int j = 0; j < i; j++) {
            if (s[j] < s[i] && len[j] + 1 > len[i]) {
                len[i] = len[j] + 1;
            }
        }
        if (len[i] > k) k = len[i];
    }

    cout << k;

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