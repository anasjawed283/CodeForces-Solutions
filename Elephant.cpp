#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int counter=0;
    if(a>0||a<6){
        //cout<<"1";
    }
    while(a>5){
            if(a>5){
                a=a-5;
                counter++;
                
            }
    }
    
    if(a>0||a<6){
        counter++;
    }
    cout<<counter;
    return 0;
}
//This code is contributed by Anas Jawed
