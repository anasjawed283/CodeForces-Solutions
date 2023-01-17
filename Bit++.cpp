#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string arr[n];
    int counter=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]=="X++"||arr[i]=="++X")
        counter++;
        else{
            counter--;
        }
    }
    cout<<counter<<endl;
    return 0;
}
//This code is contributed by Anas Jawed
