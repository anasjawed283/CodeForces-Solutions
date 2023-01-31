#include <iostream>
using namespace std;
int main()
{
    int arr[8];
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }
    cout << min(min(arr[1] * arr[2] / arr[6], arr[3] * arr[4]), arr[5] / arr[7]) / arr[0] << endl;
    return 0;
}
