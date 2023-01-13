#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    double n;
    long long int candy;
    cin>>test;
    while(test--){
        candy=0;
        cin>>n;
        candy=ceil((n/2)-1);
        cout<<candy<<endl;
    }
    return 0;
}
