#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int m;
    cin>>m;
    int P=(n*m);
    if(P%2==0){
        cout<<(P/2)<<endl;
    }
    else{
        cout<<((P-1)/2)<<endl;
    }
    return 0;
}
//This code is contributed by Anas Jawed
