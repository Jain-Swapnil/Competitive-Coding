#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    string s,t,a="";
    cin>>s>>t;
    int n=s.length();
    reverse(s.begin(),s.end());
    if(s==t){
    cout<<"YES"<<endl;
   }
   else{
       cout<<"NO"<<endl;
   }
}
