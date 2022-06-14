// https://practice.geeksforgeeks.org/problems/reverse-an-array/0

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while (t-- > 0) {
	    int n;
	    cin>>n;
	    int arr[n];
	    for (int i = 0; i < n; i++)
	        cin >> arr[i];
	    for (int i = 1; i <= n; i++)
	        cout << arr[n - i] << " ";
	    cout << "\n";
	}
	return 0;
}
