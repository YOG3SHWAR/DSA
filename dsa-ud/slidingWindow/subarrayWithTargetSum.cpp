#include <bits/stdc++.h>
using namespace std;



// todo: subarray with target sum

int countSubarray(vector<int> arr, int target) {
	int n=arr.size();
	int i=0;
	int j=0;
	int sum=0;
	int smallest=INT_MAX;
	int count=0;
	int ans=0;

	for(int i:arr)
		smallest=min(i, smallest);
	smallest=abs(smallest);
	for(int i:arr)
		i+=smallest;

	while(j<n) {
		sum+=arr[i];
		count++;
		target+=smallest;

		while(sum>target) {
			target-=smallest;
			sum-=arr[i];
			i++;
		}

		if(sum == target) {
			ans++;
		}

		j++;
	}
	return ans;
}


int main() {
	int n, target;
	cin>>n>>target;
	int input;
	vector<int> arr;
	for(int i=0;i<n;i++) {
		cin>>input;
		arr.push_back(input);
	}
	cout<<countSubarray(arr, target);
	return 0;
}

/*
10 2  -2  -20 10
30 22  18  0  30



-10

*/