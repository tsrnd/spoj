#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n, len[1001], a[1001], max = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    len[i] = 1;
    for (int j = 0; j < i; j++)
      if (a[i] > a[j] && len[j] + 1 > len[i])
        len[i] = len[j] + 1;
    if (len[i] > max)
      max = len[i];
  }
  cout << max << endl;
}
