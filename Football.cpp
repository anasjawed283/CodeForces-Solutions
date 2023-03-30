#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    int condition = 1;
    for(int i=1; i<=str.length(); i++){
        if(str[i] == str[i-1]){
            condition++;
            if(condition==7){
                cout<<"YES"<<endl;
                return 0;
            }
        }
      else{
            condition=1;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
