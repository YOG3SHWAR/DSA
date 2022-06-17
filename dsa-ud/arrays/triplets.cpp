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
	sort(arr.begin(), arr.end());
	vector<vector<int>> ans;
	for(int i=0;i<n-3;i++){
		int j=i+1;
		int k=n-1;
		int targetSum=sum-arr[i];
		while(j<k){
			if(arr[j]+arr[k]==targetSum)
				ans.push_back({arr[i], arr[j++], arr[k--]});
			else if(arr[j]+arr[k]>targetSum) k--;
			else j++;
		}
	}
	for(auto i:ans){
		for(auto j:i)
			cout<<j<<" ";
		cout<<endl;
	}
	return 0;
}

// time complexity = O(N^2)
// space complexity = O(1), as we are not using any extra space