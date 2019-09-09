/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n, m, nVal, wVal, aVal, wSub;
    cin >> n >> m;
    int result[n + 1][m + 1];
    memset(result[0], 0, sizeof (result[0]));

    for (int i = 1; i <= n; i++) {
        cin >> wVal >> nVal >> aVal;
        for (int j = 0; j <= m; j++) {
            result[i][j] = result[i-1][j];
            for (int k = 1; k <= aVal; k++) {
                if (k*wVal > j) {
                    break;
                }
                wSub = j - k*wVal;
                if (result[i][j] < result[i - 1][j - k*wVal] + k*nVal) {
                    result[i][j] = result[i - 1][j - k*wVal] + k*nVal;
                }
            }
        }
    }
    
    cout << result[n][m];
    return 0;
}