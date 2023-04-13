bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}
bool sorta(const pair<int,int> &a,const pair<int,int> &b){ if(a.first<b.first) return true;else if(a.first!=b.first) return false;return (a.second < b.second);}
string to_upper(string &a) { for (int i=0;i<(int)a.size();++i) a[i]&='_';  return a;}
string to_lower(string &a) { for (int i=0;i<(int)a.size();++i) a[i]|=' ';  return a;}
int gcd(int a,int b){if(b==0)return a;return gcd(b,a%b);}
int lcm(int a,int b){return (a/gcd(a,b))*b;}
int powermod(int x, int y, int p){int res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
void print(vec v){for(int i=0;i<v.size();i++) cout<<v[i]<<" " cout<<endl;}




    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    
    cout<<"Case #"<<tt-t<<": ";