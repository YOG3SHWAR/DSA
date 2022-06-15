#include<bits/stdc++.h>
using namespace std;


int mountainWidth(vector<int> arr) {
	int n=arr.size();
	int maxWidth=0;
	for(int i=1;i<n-1;){
		if(arr[i]>arr[i+1] && arr[i]>arr[i-1]) {
			int count=1;
			int j=i;
			while(j>=1 && arr[j]>arr[j-1]) {
				count++;
				j--;
			}
			while(i<n-2 && arr[i]>arr[i+1]) {
				i++;
				count++;
			}
			maxWidth=max(count,maxWidth);
		} else {
			i++;
		}
	}
	return maxWidth;
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
	cout<<mountainWidth(arr);
	return 0;
} 

/*
input-
16
5 6 1 2 3 4 5 4 3 2 0 1 2 3 -2 4
output-
9
*/