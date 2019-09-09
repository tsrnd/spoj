#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int arrTemp[n], maxTemp = 0, maxArr = 0;
    for (int i = 0; i < n; i++) {
        arrTemp[i] = 1;
        maxTemp = 0;
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i] && arrTemp[j] > maxTemp) {
            	maxTemp = arrTemp[j];
            };
        }
        arrTemp[i] = maxTemp + 1;
        if (arrTemp[i] > maxArr) maxArr = arrTemp[i];
    }

    cout << maxArr;

    return 0;
}
