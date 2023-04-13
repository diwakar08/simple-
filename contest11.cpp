#include<bits/stdc++.h>
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
#define mod             1000000007
template <typename T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for(auto &it:v)
    cin>>it;
    return istream;
}
// bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
// bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}
// bool sorta(const pair<int,int> &a,const pair<int,int> &b){ if(a.first<b.first) return true;else if(a.first!=b.first) return false;return (a.second < b.second);}
// string to_upper(string &a) { for (int i=0;i<(int)a.size();++i) a[i]&='_';  return a;}
// string to_lower(string &a) { for (int i=0;i<(int)a.size();++i) a[i]|=' ';  return a;}
int gcd(int a,int b){if(b==0)return a;return gcd(b,a%b);}
// int lcm(int a,int b){return (a/gcd(a,b))*b;}
// int powermod(int x, int y, int p){int res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
/*======================================================================================*/

void dsc(int t)
{
    int n;
    cin>>n;
    unordered_map<char,int> mp1,mp2;
    mp1['a']++;mp2['a']++;
    fl(i,n)
    {
        int op,k;
        string s;
        cin>>op>>k>>s;
        int n1=s.size();
        if(op==1)
        fl(i,n1)
        {
            mp1[s[i]]+=k;
        }
        else if(op==2)
        fl(i,n1)
        {
            mp2[s[i]]+=k;
        }
        char c1,c2;
        for(char c='a';c<='z';c++)
        {
            if(mp1.find(c)!=mp1.end())
            {
                c1=c;
                break;
            }
        }
        for(char c='z';c>='a';c--)
        {
            if(mp2.find(c)!=mp2.end())
            {
                c2=c;
                break;
            }
        }
        if(c2>c1)
        py;
        else if(c1>c2)
        pn;
        else if(mp1[c1]<mp2[c2]&& mp1.size()==1)
        py;
        else
        pn;
    }

}

/*======================================================================================*/
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    int tt=t;
    while(t--)
    {
        // cout<<"Case #"<<tt-t<<": ";
        dsc(tt-t);
    }
}
// bool ok1=true,ok2=false;
//         for(char c='a';c<='z';c++)
//         {
//             cout<<mp1[c]<<" "<<mp2[c]<<" "<<c<<endl;
//             if(!ok2)
//             {
//                 if(mp1[c]>mp2[c])
//                 {
//                     ok1=true;
//                     break;
//                 }
//                 else if(mp1[c]<mp2[c])
//                 ok2=true;
//                 else
//                 ok1=false;
//             }
//             else
//             {
//                 if(mp1[c]>0)
//                 ok1=false;
//             }

//         }
//         if(ok1)
//         py;
//         else
//         pn;