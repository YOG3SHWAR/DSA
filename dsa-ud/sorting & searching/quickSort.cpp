#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int start, int end) {
	int pivot=arr[end];
	int i=start-1;
	for(int j=start;j<end;j++) {
		if(arr[j]<pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[end]);
	return i+1;
}


void quicksort(vector<int> &arr, int start, int end) {
	// base case
	if(start>=end)
		return;

	// rec case
	int pivot=partition(arr, start, end);
	quicksort(arr, start, pivot-1);
	quicksort(arr, pivot+1, end);
}

int main() {
	vector<int> arr{10,5,2,0,7,6,4};
	cout<<arr.size()<<endl;
	int n=arr.size();
	quicksort(arr,0,n-1);
	for(int i: arr)
		cout<<i<<" ";
	return 0;
}