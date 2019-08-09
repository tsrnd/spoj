//
// Created by Hung Truong Q.B on 2019-08-09.
//
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    string res;
    int count = 0;
    do {
        count++;
        res += s;
        res += "\n";
    } while (next_permutation(s.begin(), s.end()));
    cout << count << endl;
    cout << res;
    return 0;
}
