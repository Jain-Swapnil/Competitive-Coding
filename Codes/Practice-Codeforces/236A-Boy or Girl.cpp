#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string c="";
    int count=0;
    cin>>c;
    int n=c.length();
    string arr[n];
    for(int i=0;i<n;i++){      
        arr[i]=c[i];
    }
sort(arr,arr+n);
for(int i=1;i<n;i++)
{
    if(arr[i-1]==arr[i])
    {
        count++;
    }    
}
int num=n-count;
if(num%2!=0)
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<< "CHAT WITH HER!"<<endl;
    }

}
