#include<bits/stdc++.h>
using namespace std;

int partss(int n,int a,int b,int c)
{
	
    if(n==0)
    return 0;
    if(n<0)
    return -1;
	int x=partss(n-a,a,b,c);
	int y=partss(n-b,a,b,c);
	int z=partss(n-c,a,b,c);
	int mx=max(x,y);
	mx=max(mx,z);
	if(mx>=0)
	return mx+1;
	else
	return-1;
}

int main()
{
	int n;
	cin>>n;
	int a,b,c;
	cin>>a>>b>>c;
    cout<<partss(n,a,b,c);
	return 0;
}
