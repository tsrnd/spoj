#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
int main() {
	int a, b, i, j;
	bool isPrime;
	cin>>a>>b;
	for (i = a; i <= b ; i++) {
		isPrime = true;
		if (i == 1) {
			continue;
		}
		
		for (j = 1; j <= sqrt(i); j++) {
			if (j == 1) {
				continue;
			}
			if ((i % j) == 0) {
				isPrime = false;
				break;
			}
		}
		
		if (isPrime) {
			cout << i << "\n";
		}
	}
	
	return 0;
}
