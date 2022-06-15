#include <iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	 string a,b,c;
		cin>>a;
		if(a.size()>10)
		{
		cout<<a[0];
		int x=a.size();
		c=a[x-1];
		string ans=to_string(x-2);
		cout<<b<<ans<<c<<endl;
	}
	else
	{
	    cout<<a<<endl;
	}
	}
	return 0;
}
