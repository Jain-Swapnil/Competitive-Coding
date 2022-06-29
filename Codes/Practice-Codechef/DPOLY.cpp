#include <iostream>
using namespace std;

int main() {
    int t,n,degree;
    int arr[n];
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	         if(arr[i]!=0)
	    {
	        degree=i;
	    }
	        
	    }
	   
	cout<<degree<<endl;
}
	    return 0;
}
