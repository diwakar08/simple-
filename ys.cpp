#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    int c1=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        c1++;
    }
    if(s==t || c1==n)
    {
        cout<<0;
    }
    else
    {
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=t[i])
            ans++;
        }
        cout<<ans<<endl;
    }


}