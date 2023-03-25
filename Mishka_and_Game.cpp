#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int p1=0,p2=0;
        while(n--)
        {
            int P1,P2;
            cin>>P1>>P2;
            p1+=(P1>P2);
            p2+=(P2>P1);
        }
        if(p1>p2)
            cout<<"Mishka"<<endl;
        else if(p1<p2)
            cout<<"Chris"<<endl;
        else
            cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}
