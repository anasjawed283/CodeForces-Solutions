#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    int a,b,row,coloumn;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                a=i+1;
                b=j+1;
            }
        }
    }
    //cout<<a;
    //cout<<b;
    row=3-a;
    coloumn=3-b;
    
    if(row<0){
        row=(row)*(-1);
    }
    if(coloumn<0){
        coloumn=(coloumn)*(-1);
    }
    
    cout<<(row+coloumn)<<endl;
    return 0;
}
