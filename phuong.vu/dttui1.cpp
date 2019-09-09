/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n, m, nVal, mVal;
    cin >> n >> m;
    int result[n + 1][m + 1];
    memset(result[0], 0, sizeof (result[0]));

    for (int i = 1; i <= n; i++) {
        cin >> mVal >> nVal;
        for (int j = 0; j <= m; j++) {
            result[i][j] = result[i - 1][j];
            if (j >= mVal && result[i][j] < result[i - 1][j - mVal] + nVal) {
                result[i][j] = result[i - 1][j - mVal] + nVal;
            }
        }
    }
    cout << result[n][m];
    return 0;
}