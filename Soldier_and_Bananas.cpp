#include<bits/stdc++.h>
using namespace std;
int main() {
	int i, n,j, w;
	long long sum=0;

	cin>>j>>n>>w;
	for(i=1; i<=w; i++){
		sum = sum+(i*j);
	}
	if(sum<= n){
		cout<<0<<endl;
	}
	else{
    cout << sum - n <<endl;
  }
	return 0;
}
//This code is contributed by Anas Jawed//
