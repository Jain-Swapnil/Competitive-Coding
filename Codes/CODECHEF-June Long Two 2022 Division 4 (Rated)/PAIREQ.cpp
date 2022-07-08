#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,max=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int m=arr[n-1];
            m++;
        int a[m];
        for(int i=0;i<m;i++)
        {
            a[i]=0;
        }
        for(int i=0;i<n;i++)
        {
        a[arr[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
            
        }
    cout<<n-max<<endl;        

	    
	}
	return 0;
}
