#include <iostream>
using namespace std;

int max(int a, int b){
    if (a>b) {
        return a;
    }
    return b;
    
}
int main(){

    int n, M, result;

    cin >> n;
    cin >> M;
    
    int Aw[n], Av[n], Fx[n+1][M+1];

    for (int i = 1; i < n+1; i++) {
        cin >> Aw[i] >> Av[i];
    }
    

    for (int i = 0; i <= M; i++) {
        Fx[0][i]= 0;
    }
    
    for (int k = 1; k <= n; k++) {

        Fx[k][0]= 0;
        for (int v = 1; v <= M; v++) {
    
            if (Aw[k]<=v) {
        
                Fx[k][v] = max( Fx[k-1][v-Aw[k]] + Av[k], Fx[k-1][v]);
                
            } else
            {
                Fx[k][v] = Fx[k-1][v];
            }                
        }
    }
    result = Fx[n][M];
    cout << result << endl;    
    return 0;
}
