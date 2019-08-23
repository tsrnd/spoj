/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>

using namespace std;

int main() {
    int n, res;
    cin >> n;
    int F[n], result[n];
    res = 0;

    for (int i = 0; i < n; i++) {
        cin >> F[i];
        result[i] = 1;
        for (int j = 0; j < i; j++) {
            if (F[i] > F[j] && (result[j] + 1) > result[i]) {
                result[i] = result[j] + 1;
            }
        }
        if (result[i] > res) {
            res = result[i];
        }
    }
    cout << res;
    return 0;
}