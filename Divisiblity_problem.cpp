#include <iostream>
using namespace std;
int main() {
int test;
cin>>test;
while(test--){
	
	int a,b;
	cin>>a>>b;
	if(a%b==0) 
	{
    cout<<0<<endl;
	}
	else {
	int k=a%b;
	cout<<b-k<<endl;
	}
}
	return 0;
}
