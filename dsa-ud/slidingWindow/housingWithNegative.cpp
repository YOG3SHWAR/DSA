#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> housing(vector<int> arr,int s) {
	vector<vector<int>> ans;
	int n=arr.size();
	int i=0;
	int j=0;
	int sum=0;
	int minEl=INT_MAX;
	for(int i: arr)
		minEl=min(minEl, i);
	minEl=abs(minEl);
	for(int i=0;i<n;i++)
		arr[i]+=minEl;
	while(j<n) {
		sum=sum + arr[j];
		s+=minEl;
		while(sum>s && i<=j) {
			sum=sum-arr[i];
			i++;
			s-=minEl;
		}
		if(sum==s)
			ans.push_back({i, j});
		j++;
	}
	return ans;
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
	for(auto i: housing(arr, sum)){
		for(auto j:i) cout<<j<<" ";
		cout<<endl;
	}
	return 0;
}

/*
sample input-
11
1 3 2 1 4 1 3 2 1 1 2
8
output-
2 5 
4 6 
5 9 
*/