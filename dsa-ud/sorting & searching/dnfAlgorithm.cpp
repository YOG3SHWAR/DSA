#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++) {
		int temp;
		cin>>temp;
		arr.push_back(temp);
	}
	int low=0;
	int mid=0;
	int high=n-1;
	while(mid<=high){
		if(arr[mid]==0){
			swap(arr[low], arr[mid]);
			low++;
			mid++;
		}
		if(arr[mid]==1) {
			mid++;
		}
		if(arr[mid]==2) {
			swap(arr[mid], arr[high]);
			high--;
		}
	}
	for(auto i: arr)
		cout<<i<<" ";
	return 0;
}