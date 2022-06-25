#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, int start, int end) {
	int i=start;
	int m=(start+end)/2;
	int j=m+1;
	vector<int> temp;
	int count=0;
	while(i<=m && j<=end) {
		if(arr[i]<arr[j])
			temp.push_back(arr[i++]);
		else {
			count+=m-i+1;
			temp.push_back(arr[j++]);
		}
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
	return count;

}

int inversionCount(vector<int> &arr, int start, int end) {
	// base case 
	if(start>=end)
		return 0;
	// recursive case
	int mid=(start+end)/2;
	int c1=inversionCount(arr, start, mid);
	int c2=inversionCount(arr, mid+1, end);
	int ci=merge(arr, start, end);
	return c1+c2+ci;
}

int main()
{
	
	vector<int> arr={0,5,2,3,1};
	int start=0;
	int end=arr.size()-1;
	cout<<inversionCount(arr, start, end);
	return 0;
}