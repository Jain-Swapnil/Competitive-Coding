#include <iostream>
using namespace std;

int main() {
    int t,value,n;
    int arr[4];
    //int ans[10];
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cin>>n;
        for(int i=0;i<4;i++)
        {
            cin>>arr[i];
        }
        
        value=arr[0]+arr[1]+arr[2]+arr[3];
        if(value==n)
        {
        for(int i=0;i<4;i++)
        {
            if(arr[i]>arr[0])
            {
                arr[0]=arr[i];
            }            
        }
         cout<<arr[0]<<endl;  
        }
        
    }
 
        return 0;
}
