#include <iostream>
#include <math.h>
using namespace std;

bool checkNguyenTo(int a);
int main(int argc, const char * argv[]) {
    int a, b;
    cin >> a;
    cin >> b;
    for (int i = a; i <= b; i ++) {
        if(checkNguyenTo(i)){
            cout << i << endl;
        }
    }
    return 0;
}

bool checkNguyenTo(int a){
    for(int i = 2; i <= sqrt(a); i ++){
        if(a % i == 0){
            return false;
        }
    }
    
    return a != 1;
}