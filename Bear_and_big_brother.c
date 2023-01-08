
#include <iostream>
using namespace std;
int main() {
    int l;
    int b;
    cin>>l;
    cin>>b;
    int counter=0;
    
    while(l<=b){
        counter++;
        l=l*3;
        b=b*2;     
    }
    cout<<counter;
    return 0;
}
//This code is contributed by Anas Jawed
