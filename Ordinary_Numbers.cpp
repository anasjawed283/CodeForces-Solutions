#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
	cin>>test;
    while(test--)
	{
    	long long n, count=0, start;
    	cin >> n;
    	for(int i=1; i<=9; i++)
    	{
    		start=i;
    		while(start<=n)
    		{
    			count++;
    			start=start*10+i;
			}
		}
		cout << count << endl;
    }
}
