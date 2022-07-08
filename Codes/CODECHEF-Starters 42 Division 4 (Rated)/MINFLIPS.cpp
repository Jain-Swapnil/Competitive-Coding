#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
		int t;
		int neg=0;			
    cin>>t;
    while(t--)
    {
        int n,diff,ans;
        int count=0;
        int arr[1000];
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr + n, greater<int>());
        for(int i=0;i<n;i++)
        {
        if(arr[i]>0)
        {
            count++;
        }
        }
        neg=n-count;
        if(n%2 != 0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
           diff=abs(count-neg);
           ans=diff/2;
           cout<<ans<<endl;
        }
    }
    return 0;
  }
