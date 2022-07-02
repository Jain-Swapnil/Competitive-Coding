#include<iostream>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    if(n%5==0)
    {
        cout<<(n/5)<<endl;
    }
    else
    {
        ans=(n/5)+1;
        cout<<ans<<endl;
    }
}
