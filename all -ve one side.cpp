#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int l=0,r=n-1;
	while(l<=r)
	{
	    while(arr[l]<0)
	    l++;
	    while(arr[r]>=0)
	    r--;
	    if(l<r)
	    swap(arr[l],arr[r]);
	}
	for(int i=0;i<n;i++)
	{
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}