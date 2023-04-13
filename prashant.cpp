#include <bits/stdc++.h>

using namespace std;
int ans=0;
void ss(vector<int> set, int n, int k)
{
    int n1=set.size();
	int x[n1];
	int j = n1 - 1;
	while (n > 0)
	{
		x[j] = n % 2;
		n = n / 2;
		j--;
	}

	int sum = 0;
	for (int i = 0; i < n1; i++)
		if (x[i] == 1)
			sum = sum + set[i];
	if (sum == k)
	{
		ans++;
	}
}
void func(vector<int> arr, int k)
{
	int x = pow(2, arr.size());
	for (int i = 1; i < x; i++)
		ss(arr, i, k);
}
int main()
{
	
	int k ;
    int n;
    cin>>n;
    vector<int> arr(n) ;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cin>>k;
	func(arr, k);
    if(ans==0)
    cout<<999<<endl;
    else
    cout<<ans<<endl;
	return 0;
}
