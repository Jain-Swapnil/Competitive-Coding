#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,count=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	
		int arr[3]={};
	
		for(int j=0;j<3;j++)
		{
			cin>>arr[j];
		}	   
		int n = sizeof(arr) / sizeof(arr[0]);

		sort(arr, arr + n);
		//cout<<endl;
		if(arr[1]==1 && arr[2]==1)
		{
			count++;
		}
	
}
cout<<count<<endl;
}
