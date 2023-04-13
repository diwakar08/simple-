#include<bits/stdc++.h>
using namespace std;
#define int             long long int
#define endl            "\n"
#define pb              push_back
#define ppb             pop_back
#define pf              push_front
#define ppf             pop_front
#define pii             pair<int,int>
#define all(v)          v.begin(),v.end()

string to_upper(string &a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string &a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
int gcd(int a,int b){if(b==0)return a;return gcd(b,a%b);}
int lcm(int a,int b){return (a/gcd(a,b))*b;}


void dsc()
{
       
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    //freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--)
    dsc();
}