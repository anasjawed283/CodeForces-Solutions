#include <bits/stdc++.h>
using namespace std;
int main(){
    int weight;
    cin>>weight;
    int m;
    if(weight<=2){
        cout<<"NO"<<endl;
    }
    else{
        for(int i=2;i<weight;i=i+2){
        m=weight-i;
        if(m%2==0){
            cout<<"YES"<<endl;
            break;
        }
        else{
            cout<<"NO";
            break;
        }
    }
    }
    
    return 0;
}
//This code is contributed by Anas Jawed//
