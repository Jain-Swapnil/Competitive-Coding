#include <iostream>
using namespace std;
int main() {
	int a,n,k,count=0;
	cin>>n>>k;
	int arr[10000];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	a=arr[k-1];
	if(a==0)
	{
    for(int i=0;i<n;i++)
	{
		if(arr[i]>a)
		{
			count++;
		}
		
	}
	cout<<count<<endl;
	
	}
	else{
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=a)
		{
			count++;
		}
	}
	cout<<count<<endl;
	}
 
}
