#include <bits/stdc++.h>
using namespace std;

int housing(vector<int> arr,int s) {
	int n=arr.size();
	int smallestWindow=n;
	int i=0,j=0;
	int curSum=0;
	while(j<n) {
		curSum+=arr[j];
		while(curSum>s && i<=j) {
			curSum-=arr[i];
			i++;
		}
		if(curSum==s)
			smallestWindow=min(smallestWindow, j-i);
		j++;
	}

	return smallestWindow;
}

int main() {
	int n;
	cin>>n;
	int input;
	vector<int> arr;
	int sum;
	for(int i=0;i<n;i++) {
		cin>>input;
		arr.push_back(input);
	}
	cin>>sum;
	cout<<housing(arr, sum);	
	return 0;
}