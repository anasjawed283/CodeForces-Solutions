#include <bits/stdc++.h>
using namespace std;
int main(){
  int test;
  cin>>test;
  while(test--)
  {
    long long n;
    long long counter=0, j;
    cin >> n;
    for(int i=1; i<=9; i++)
    {
      j=i;
      while(j<=n)
      {
        count++;
        j=j*10+i;
      }
    }
    cout << count << endl;
  }
}
