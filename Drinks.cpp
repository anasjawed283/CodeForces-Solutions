
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    double arr[n];
    double op;
    double sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    op=(sum/n);
    cout<<op<<endl;

    return 0;
}
//This code is contributed by Anas Jawed
