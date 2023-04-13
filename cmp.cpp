#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++)
    cin>>p[i];
    int x=p[0],y;
        int ans=0;
        for(int i=1;i<n;i++)
        {
            if(p[i]<=x)
                x=p[i];
            else
            {
                y=p[i];
                ans=max(y-x,ans);
            }
        }
        cout<<ans<<endl;
}