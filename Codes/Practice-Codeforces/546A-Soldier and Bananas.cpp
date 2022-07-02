#include<iostream>
using namespace std;
int main(){
    int k,n,w,sum=0,rem=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        sum=sum+i*k;
    }
    rem=sum-n;
    if(rem<0)
    {
        cout<<0<<endl;
    }
    else{
        cout<<rem<<endl;
    }
}
