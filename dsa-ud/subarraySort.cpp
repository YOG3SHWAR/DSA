#include <bits/stdc++.h>
using namespace std;


// time compexity = O(NlogN) 
vector<int> subarraySort(vector<int> arr) {
	int n=arr.size();
	int left=-1;
	int right=-1;
	vector<int> temp=arr;
	sort(temp.begin(),temp.end());
	for(int i=0;i<n;i++) {
		if(temp[i]!=arr[i]) {
			left=i;
			break;
		}
	}
	for(int i=n-1;i>=0;i--) {
		if(temp[i]!=arr[i]) {
			right=i;
			break;
		}
	}
	return {left,right};
}

// time compexity = O(N) 
bool outOfOrder(vector<int>arr, int i) {
	int n=arr.size();
	if(i==0)
		return arr[i]>arr[1];
	if(i==n-1)
		return arr[i]<arr[i-1];
	return arr[i]>arr[i+1] || arr[i]<arr[i-1];
}

vector<int> subarraySort2(vector<int> arr) {
	int n=arr.size();
	int smallest=INT_MAX;
	int largest=INT_MIN;
	for(int i=0;i<n;i++) {
		if(outOfOrder(arr,i)) {
			smallest=min(smallest, arr[i]);
			largest=max(largest, arr[i]);
		}
	}
	if(smallest==INT_MIN)
		return {-1,-1};
	int left=0;
	while(smallest>arr[left]) left++;
	int right=n-1;
	while(largest<arr[right]) right--;
	return {left, right};

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
	for(int i: subarraySort2(arr))
		cout<<i<<" ";
	return 0;
} 

/*
input-
10
1 2 3 4 5 8 6 7 9 10
output-
5 7 
*/