/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, max = 1;
    cin >> n;

    vector<int> arr(n), lis(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    lis[0] = arr[0];

    for (int i = 1; i < n; i++) {
        // Số nhỏ nhất mới nhất
        // = cho case arr[i] bằng với số nhỏ nhất sẽ thay thế luôn
        // lis[0] chứa giá trị số nhỏ nhất với length = 1
        if (arr[i] <= lis[0]) {
            lis[0] = arr[i];
        }
        // Số lớn nhất mới nhất
        // lis[length - 1] chứa giá trị số lớn nhất với độ dài tối đa
        else if (arr[i] > lis[max - 1]) {
            // Mở rộng mảng lis với độ dài tối đa mới
            lis[max++] = arr[i];
        }
        else {
            // Tìm giá trị trong mảng lis ở đó arr[i] nhỏ hơn giá trị lis[length]
            // optimize: dùng binary search.
            for (int j = 1; j < max; j++) {
                if (lis[j] >= arr[i]) {
                    lis[j] = arr[i];
                    break;
                }
            }
        }
    }

    cout << max;

    return 0;
}