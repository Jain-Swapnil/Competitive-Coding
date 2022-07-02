#include<iostream>
#include <cctype>
using namespace std;
int main(){
    string c="";
    cin>>c;
    char ch=toupper(c[0]);
    cout<<ch;
    for(int i=1;i<c.length();i++){      
    cout<<c[i];
}}
