#include"bits/stdc++.h"
using namespace std;
#define int             long long int
#define endl            "\n"
#define pb              push_back
#define ppb             pop_back
#define pf              push_front
#define ppf             pop_front
#define mpr             make_pair
#define py              cout<<"YES\n"
#define pn              cout<<"NO\n"
#define pi              3.141592653589793238
#define pll             pair<int,int>
#define all(v)          v.begin(),v.end()
#define umap            unordered_map<int,int>
#define omap            map<int,int>
#define vec             vector<int>
#define fl(i,n)         for(int i=0;i<n;i++)
#define mod             998244353
template <typename T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for(auto &it:v)
    cin>>it;
    return istream;
}
void print(vec &v){for(int i=0;i<v.size();i++) cout<<v[i]<<" "; cout<<endl;}
/*======================================================================================*/
//question name - 

void dsc(int t)
{
    int n;
    cin>>n;
    vec v(n);
    cin>>v;
    int xor1=0;
    fl(i,n)
    xor1^=v[i];
    if(n%2==0 && xor1){
        cout<<-1<<endl;
        return;
    }
    cout<<xor1<<endl;
}
/*======================================================================================*/
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int t=1;
    cin>>t;
    int tt=t;
    while(t--)
    {
        dsc(tt-t);
    }
}
int n;
    cin>>n;
    string s;
    cin>>s;
    char c=s[0];
    int index=1;
    fl(i,n)
    {
        if(s[i]==c)index=i+1;
        else break;
    }
    if(index==n){
        cout<<s<<endl;return;
    }
    char ch=s[index];
    int mn;
    bool ok=false;
    for(int i=index;i<n;i++)
    {
        if(ch>=s[i])
        {
            ch=s[i];
            mn=i;
        }
    }
    string ans;
    if(ch>s[0]){
        cout<<s<<endl;
        return;
    }
    // cout<<index<<" "<<ch<<endl;
    ans+=ch;
    for(int i=0;i<n;i++)
    {
        if(i==mn)continue;
        ans+=s[i];
    }
    cout<<ans<<endl;