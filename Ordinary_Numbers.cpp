#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
	cin>>test;
    while(test--)
	{
    	long long n, count=0, initialization;
    	cin >> n;
    	for(int i=1; i<=9; i++)
    	{
    		initialization=i;
    		while(initialization<=n)
    		{
    			count++;
    			initialization=initialization*10+i;
			}
		}
		cout << count << endl;
    }
}
