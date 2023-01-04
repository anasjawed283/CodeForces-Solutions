#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int counter=0;
    while(test--){
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        if(a+b+c>=2){
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}
//This code is contributed by Anas Jawed//
