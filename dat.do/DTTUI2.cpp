#include <iostream>
using namespace std;

int main()
{
    int n, m;
    
    cin >> n;
    cin >> m;
    
    int arrWVA[n][3];
    int sumA = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> arrWVA[i][0] >> arrWVA[i][1] >> arrWVA[i][2];
        sumA += arrWVA[i][2];
    }
    
    int arrReach[sumA][2];
    int index = 0;
    for (int i = 0; i < sumA; i++) {
        arrReach[i][0] = arrWVA[index][0];
        arrReach[i][1] = arrWVA[index][1];
        arrWVA[index][2]--;
        if(arrWVA[index][2] == 0){
            index ++;
        }
    }
    
    int eachSumV = 0, eachSumW, maxSumV = 0;
    for (int i = 0; i < n; i++) {
        eachSumV = arrReach[i][1];
        eachSumW = arrReach[i][0];
        
        for (int j = 0; j < n; j++) {
            if(i == j){
                continue;
            }
            if(eachSumW + arrReach[j][0] <= m){
                eachSumV += arrReach[j][1];
                eachSumW += arrReach[j][0];
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
