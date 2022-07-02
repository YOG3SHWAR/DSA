#include <bits/stdc++.h>
using namespace std;

pair<int,int> search(int m,int n,vector<vector<int>> arr, int k) {
	int i=0;
	int j=n-1;
	while(i<n && j>=0) {
		int val=arr[i][j];
		if(val>k)
			j--;
		else if(val<k)
			i++;
		else return {i, j};
	}
	return {-1, -1};
}

int main() {
	int m,n;
	cin>>m>>n;
	vector<vector<int>> arr(m);
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			int temp;
			cin>>temp;
			arr[i].push_back(temp);
		}
	}
	int k;
	cin>>k;
	pair<int,int> ans=search(m,n,arr,k);
	cout<<ans.first<<" "<<ans.second;
	// for(auto i: arr) {
	// 	for(auto j: i)
	// 		cout<<j<< " ";
	// 	cout<<endl;
	// }
	return 0;
}

/*
sample input-
3 3
1 4 9
2 5 10
6 7 11
10
output-
1 2
*/