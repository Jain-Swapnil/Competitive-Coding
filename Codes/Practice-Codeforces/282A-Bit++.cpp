#include<iostream>
using namespace std;
int main(){
int a=0,t;
cin>>t;
string x;
for(int i=0;i<t;i++)
{
    cin>>x;
    if(x=="X++" || x=="++X")
    {
        a=a+1;
    }
    if(x=="--X" || x=="X--")
    {
        a=a-1;
    }
}
cout<<a<<endl;
}
