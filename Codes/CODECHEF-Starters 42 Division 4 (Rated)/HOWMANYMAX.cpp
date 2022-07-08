#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int countFreq(string &pat, string &s)
{
    int M = pat.length();
    int N = s.length();
    int res = 0;   
    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
            if (s[i+j] != pat[j])
                break;
        if (j == M) 
        {
           res++;
        }
    }
    return res+1;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   string s;
	   int n;
	   cin>>n;
	   cin>>s;
	   string pat="10";
	  cout<<countFreq(pat,s)<<endl;
	   
	}
}
