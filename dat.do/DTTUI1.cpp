#include <iostream>
using namespace std;

int main()
{
    int n, m;
    
    cin >> n;
    cin >> m;
    
    int arrWV[n][2], arrSum[n][n];
    
    for (int i = 0; i < n; i++) {
        cin >> arrWV[i][0] >> arrWV[i][1];
    }
    
    int eachSumV = 0, eachSumW, maxSumV = 0;
    for (int i = 0; i < n; i++) {
        eachSumV = arrWV[i][1];
        eachSumW = arrWV[i][0];
        
        for (int j = 0; j < n; j++) {
            if(i == j){
                continue;
            }
            if(eachSumW + arrWV[j][0] <= m){
                eachSumV += arrWV[j][1];
                eachSumW += arrWV[j][0];
            } else {
                break;
            }
        }
        if(maxSumV < eachSumV){
            maxSumV = eachSumV;
        }
    }
    
    cout << maxSumV << endl;
    
    return 0;
}
