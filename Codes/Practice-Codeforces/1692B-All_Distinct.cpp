#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int uniqueElements(int a[], int size){
   int i, j, count = 1;
   for (i = 1; i < size; i++){
      for (j = 0; j < i; j++){
         if (a[i] == a[j]){
            break;
         }
      }
      if (i == j){
         count++;
      }
   }
   return count;
}
int main()
{
    int t,count=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n%2==0)
        {
            int ans=uniqueElements(arr,n);
           
            if(ans%2==0)
            {
                cout<<ans<<endl;
            }
            else
            {
              cout<<ans-1<<endl;  
            }
            
        }
        else
        {
            
            int ans=uniqueElements(arr,n);
            if(ans%2==0)
            {
                cout<<ans-1<<endl;
            }
            else
            {
              cout<<ans<<endl;  
            }
            
        }
    }
 
    return 0;
}
