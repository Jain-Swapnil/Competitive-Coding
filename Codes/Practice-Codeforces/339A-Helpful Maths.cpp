#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    int n;
    n=a.size();
    string arr[n]; 
    for(int i=0;i<n;i=i+2)
    {
        arr[i]=a[i];
    }
    sort(arr,arr+n);
    cout<<arr[(n/2)];  
    for(int i=n/2+1;i<n;i++)
    {
         cout<<"+";  
        cout<<arr[i];       
    }    
}
