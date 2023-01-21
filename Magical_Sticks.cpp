#include<bits/stdc++.h>
using namespace std;
int main()
{
  int test;
  cin>>test;
  int n;
  while(test--){
    int ans = 0;
    cin>>n;
    ans = n/2;
    if(n % 2 == 1){
      ans++;
    }
    cout<<ans<<endl;
  }
  return 0;
}
