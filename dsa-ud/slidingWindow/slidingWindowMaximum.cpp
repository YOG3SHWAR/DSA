#include <bits/stdc++.h>
using namespace std;

vector<int> slidingWindowMax(vector<int> arr, int k) {
	vector<int> ans;
	int n=arr.size();
	int currentMax=INT_MIN;
	int j=0;
	while(j<k) {
		currentMax=max(arr[j], currentMax);
		j++;
	}
	ans.push_back(currentMax);
	while(j<n) {
		if(arr[j]>currentMax) {
			currentMax=arr[j];
		}
		ans.push_back(currentMax);
		j++;
	}
	return ans;
}

int main() {
	int n,k;
	cin>>n>>k;
	vector<int> arr;
	for(int i=0;i<n;i++) {
		int input;
		cin>>input;
		arr.push_back(input);
	}
	for(auto i:slidingWindowMax(arr, k))
		cout<<i<<" ";
	return 0;
}

/*
sample input-
9 3
1 2 3 1 4 5 2 3 6
output-
3 3 4 5 5 5 6 
*/