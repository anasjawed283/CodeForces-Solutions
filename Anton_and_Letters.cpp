#include<bits/stdc++.h>
using namespace std;
int main()
{
  
    string str;
    set <char> a;
    getline(cin,str);
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]>='a' && str[i]<='z')
            a.insert(str[i]);
    }
    cout<<a.size()<<endl;
    return 0;
}
