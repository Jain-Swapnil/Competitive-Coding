#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        int arr[4];
        int n=4;
        for(int i=0;i<4;i++)
        {
        cin>>arr[i];
        }
		a=arr[0];
        sort(arr, arr + n);
        for(int i=0;i<4;i++)
        {
			
            if(arr[i]==a)
            {
				int a=4-(i+1);
                cout<<a%4<<endl;
            }
        }
    }
 
    return 0;
}
