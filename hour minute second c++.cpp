#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float h,m,s,a,b,c;
		float hour,min,sec,res;
		cin>>h>>m>>s>>a>>b>>c;
		sec=c;
		min=b+sec/s;
		hour=a+min/m;
		//cout<<sec<<"    "<<min<<"    "<<hour<<endl;
		hour=hour/h;
		min=min/m;
		res=hour-min;
	//	cout<<hour<<" "<<min<<endl;
		if(res<0)
			res=-res;

		//cout<<res<<" ";
		res=res*360;
		if(res>180)
			res=360-res;
		cout<<fixed<<setprecision(9)<<res<<endl;
	}
	return 0;
}