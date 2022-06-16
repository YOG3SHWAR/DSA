#include <bits/stdc++.h>
using namespace std;

int waterStored(vector<int> arr) {
	int n=arr.size();
	if(n<=2)
		return 0;
	int waterStored=0;
	vector<int> left;
	vector<int> right;
	int maxLeft=0;
	int maxRight=0;
	for(int i=0;i<n;i++){
		maxLeft=max(arr[i],maxLeft);
		maxRight=max(arr[n-1-i], maxRight);
		left.push_back(maxLeft);
		right.insert(right.begin(),maxRight);
	}
	for(int i=0;i<n;i++){
		waterStored+=min(left[i],right[i])-arr[i];
	}
	return waterStored;
}

int main() {
	int n;
	cin>>n;
	std::vector<int> arr;
	for(int i=0;i<n;i++) {
		int temp;
		cin>>temp;
		arr.push_back(temp);
	}
	cout<<waterStored(arr);
	return 0;
} 

/*
input-
12
0 1 0 2 1 0 1 3 2 1 2 1
output-
6
*/