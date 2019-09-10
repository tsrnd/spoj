#include <iostream>
using namespace std;

// Take Left (first) Index of the array and Right (last) Index of the array
void quickSort(int Data[][2], int l , int r)
{
    // If the first index less or equal than the last index
    if (l <= r)
    {
        // Create a Key/Pivot Element
        int key = Data[(l+r)/2][1];
        
        // Create temp Variables to loop through array
        int i = l;
        int j = r;
        
        while (i <= j)
        {
            while (Data[i][1] > key)
                i++;
            while (Data[j][1] < key)
                j--;
            
            if (i <= j)
            {
                swap(Data[i][0], Data[j][0]);
                swap(Data[i][1], Data[j][1]);
                i++;
                j--;
            }
        }
        
        // Recursion to the smaller partition in the array after sorted above
        // Reference Giải Thuật Đệ Quy :: STDIO.VN
        if (l < j)
            quickSort(Data, l, j);
        if (r > i)
            quickSort(Data, i, r);
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n, m;

    cin >> n;
    cin >> m;

    int arrWV[n][2];

    for (int i = 0; i < n; i++) {
        cin >> arrWV[i][0] >> arrWV[i][1];
    }
    
    quickSort(arrWV, 0, n-1);

    
    int sumVMax = 0, sumWMax = 0;
    for (int i = 0; i < n; i++) {
        if(arrWV[i][0] + sumWMax > m){
            continue;
        }
        else {
            sumWMax += arrWV[i][0];
            sumVMax += arrWV[i][1];
            
             
        }
    }
    
    cout << sumVMax << endl;
    
    return 0;
}
