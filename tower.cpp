#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
        int n,x,y;
    cin>>n;
    do{
        cin>>x>>y;
       (y==1||x%2==0)?cout<<"2"<<endl:cout<<"1"<<endl;
         n--;
    }while(n>0);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    return 0;
}