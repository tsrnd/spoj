#include <iostream>
using namespace std;

long max(long a, long b){
    if (a>b) {
        return a;
    }
    return b;
    
}
int main(){

    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long n, n2,result, M;

    cin >> n;
    cin >> M;
    
    // B: input
    long Bw[n], Bv[n], Ba[1000];
    n2=0;
    for (long i = 1; i <=n; i++) {
        cin >> Bw[i] >> Bv[i] >> Ba[i];
        n2 += Ba[i];
    }
    long Aw[n2+1], Av[n2+1], Fx[n2+1][M+2];;
    long index = 0;
    for(int h = 0; h <= n; h++)
    {
        for(int j = 0; j < Ba[h]; j++)
        {
            index++;
            Aw[index] = Bw[h];
            Av[index] = Bv[h];
            
        }      
    }

    for (int i = 0; i <= M; i++) {
        Fx[0][i]= 0;
    }
    
    for (int k = 1; k <= n2; k++) {

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
    result = Fx[n2][M];
    cout << result << endl;    
    return 0;
}
