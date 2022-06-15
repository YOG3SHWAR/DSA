#include <bits/stdc++.h>
using namespace std;

vector<int> maxBand(vector<int> arr) {
	unordered_set<int> set;
	vector<int> ans;
	for(auto i: arr)
		set.insert(i);
	for(int i=0;i<arr.size();i++) {
		if(set.find(arr[i]-1)!=set.end())
			continue;
		vector<int> temp;
		int next=arr[i]+1;
		temp.push_back(arr[i]);
		while(set.find(next)!=set.end()){
			temp.push_back(next);
			next++;
		}
		if(temp.size() > ans.size())
			ans=temp;
	}
	return ans;
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
	for(auto i: maxBand(arr))
		cout<<i<<" ";
	return 0;
} 

/*
input-
12
1 9 3 0 18 5 2 4 10 7 12 6
output-
0 1 2 3 4 5 6 7 
*/