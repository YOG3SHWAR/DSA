#include<bits/stdc++.h>
using namespace std;

int main() {
	/* code */
	int n;
	int sum;
	cin>>n;
	cin>>sum;
	vector<int> arr;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		arr.push_back(temp);
	}
	int count=0;
	unordered_set<int> set;
	for(int i=0;i<n;i++){
		if(set.find(arr[i])!=set.end())
			count++;
		else set.insert(sum-arr[i]);
	}
	cout<<count;
	return 0;
}