#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n], arrMax[n];
    for (int i = 0; i < n; i ++) {
        cin >> arr[i];
        arrMax[i] = 0;
    }
    
    int count;
    int  max = 1;
    arrMax[0] = 1;
    
    for (int i = 1; i < n ; i++) {
        count = 1;
        for (int j = i - 1; j >= 0; j--) {
            if(arr[i] > arr[j]){
                if(arrMax[j] + 1 > count){
                    count = arrMax[j] + 1;
                }
            }
        }
        arrMax[i] = count;
        if(count > max){
            max = count;
        }
    }

    cout << max << endl;
    return 0;
}
