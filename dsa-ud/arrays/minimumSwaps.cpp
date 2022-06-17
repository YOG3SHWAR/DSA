#include <bits/stdc++.h>
using namespace std;


// time complexity = O(NlogN)
int minimumSwaps(vector<int> arr) {
	int ans=0;
	int n=arr.size();
	pair<int,int> ap[n];
	for(int i=0;i<n;i++) {
		ap[i].first=arr[i];
		ap[i].second=i;
	}
	sort(ap, ap+n);
	vector<bool> visited(n,false);
	for(int i=1;i<n;i++) {
		int oldPosition=ap[i].second;
		if(visited[i] or i==oldPosition)
			continue;
		int node=i;
		int cycle=0;
		while(!visited[node]) {
			visited[node]=true;
			node=ap[node].second;
			cycle++;
		}
		ans+=(cycle-1);
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
	cout<<minimumSwaps(arr);
	return 0;
} 

/*
input-
5
2 4 5 1 3
output-
3
*/