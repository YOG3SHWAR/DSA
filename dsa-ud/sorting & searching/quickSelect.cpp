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

int quick_select(vector<int> &arr, int s, int e, int k) {
	// base condition
	if(s>e)
		return -1;
	// rec condition
	int p=partition(arr, s, e);
	if(p==k)
		return arr[k];
	if(k<p) {
		quick_select(arr, s, p-1, k);
	} else
		quick_select(arr, p+1, e, k);
}

int main() {
	vector<int> arr{10,5,2,0,7,6,4};
	cout<<arr.size()<<endl;
	int k;
	cin>>k;
	int n=arr.size();
	cout<<quick_select(arr,0,n-1,k);
	return 0;
}