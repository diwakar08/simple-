#include<bits/stdc++.h>
using namespace std;


class Solution{
public:	
	
	void rotatearr(vector<vector<int>>& arr, int n) {
	      int times=n/2;
	      int lu1=0,lu2=0,ru1=0,ru2=n-1,ld1=n-1,ld2=0,rd1=n-1,rd2=n-1;
	      int x=n-1;
	      while(times--)
	      {
	          int val=x;
	          int currval=arr[lu1][lu2];
	          while(val--)
	          {
                currval=arr[lu1][lu2];
                swap(arr[ld1][ld2],currval);
                swap(arr[rd1][rd2],currval);
                swap(arr[ru1][ru2],currval);
                swap(arr[lu1][lu2],currval);
                lu1++;ld2++;rd1--;ru2--;
                // cout<<lu1<<lu2<<" "<<ru1<<ru2<<" "<<ld1<<ld2<<" "<<rd1<<rd2<<endl;
	          }
	          int st1=lu1,st2=lu2;
	          lu1=ru1+1;lu2=ru2+1;
	          ru1=rd1+1;ru2=rd2-1;
	          rd1=ld1-1;rd2=ld2-1;
	          ld1=st1-1;ld2=st2+1;
	          x-=2;
	      }
	}

};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        vector<vector<int>> arr;
        for (int i = 0; i < n; i++) {
            vector<int> a;
            for (int j = 0; j < n; j++) {
                cin >> x;
                a.push_back(x);
            }
            arr.push_back(a);
        }
        Solution ob;
        ob.rotatearr(arr, n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
            cout<<endl;
        }
        cout << "\n";
    }
    return 0;
}