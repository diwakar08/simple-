// C++ program to understand difference between
// pointer to an integer and pointer to an
// array of integers.
#include <iostream>
using namespace std;
int main()
{
	// Pointer to an integer
	int *p;
	
	// Pointer to an array of 5 integers
	
	int arr[5];
	for(int i=0;i<5;i++)
    cin>>arr[i];
    int (*ptr)[5];ptr = &arr;
    for(int i=0;i<5;i++)
    {
        cout<<*(*(ptr+i))<<endl;
        ptr++;
    }
	// Points to 0th element of the arr.
	p = arr;
	
	// Points to the whole array arr.
	
	
	cout << "p =" << p <<", ptr = "<< ptr<< endl;
	p++;
	ptr++;
	cout << "p =" << p <<", ptr = "<< ptr<< endl;
	
	return 0;
}

// This code is contributed by SHUBHAMSINGH10
