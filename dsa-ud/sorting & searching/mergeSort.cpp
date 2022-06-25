#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int start, int end) {
	int i=start;
	int m=(start+end)/2;
	int j=m+1;
	vector<int> temp;
	while(i<=m && j<=end) {
		if(arr[i]<arr[j])
			temp.push_back(arr[i++]);
		else temp.push_back(arr[j++]);
	}
	while(i<=m) {
		temp.push_back(arr[i]);
		i++;
	}
	while(j<=end) {
		temp.push_back(arr[j]);
		j++;
	}

	for(int idx=start, k=0; idx<=end; idx++, k++) {
		arr[idx]=temp[k];
	}

}

void mergeSort(vector<int> &arr, int start, int end) {
	// base case 
	if(start>=end)
		return;
	// recursive case
	int mid=(start+end)/2;
	mergeSort(arr, start, mid);
	mergeSort(arr, mid+1, end);
	return merge(arr, start, end);
}

int main()
{
	
	vector<int> arr={1,5,6,3,6,3,2,5,67,234,90};
	int start=0;
	int end=arr.size()-1;
	mergeSort(arr, start, end);
	for(int i:arr)
		cout<<i<<" ";
	return 0;
}