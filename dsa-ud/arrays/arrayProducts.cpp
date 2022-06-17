#include<bits/stdc++.h>
using namespace std;


// time complexity = O(N^2)
// spaxe complexity = O(N)
vector<int> arrayProduct(vector<int> arr) {
	vector<int> ans;
	int n=arr.size();
	for(int i=0;i<n;i++) {
		int prod=1;
		for(int j=0;j<n;j++) {
			if(i==j) continue;
			prod*=arr[j];
		}
		ans.push_back(prod);
	}
	return ans;
}

// time complexity = O(N)
// space complexity = O(N)
vector<int> arrayProduct2(vector<int> arr) {
	int n=arr.size();
	if(n<=2)
		return arr;
	vector<int> ans(n,1);
	vector<int> left(n,1);
	vector<int> right(n,1);
	left[0]=arr[0];
	right[n-1]=arr[n-1];
	for(int i=1;i<n;i++) {
		left[i]=left[i-1]*arr[i];
		right[n-1-i]=right[n-i]*arr[n-1-i];
	}
	ans[0]=right[1];
	ans[n-1]=left[n-2];
	for(int i=1;i<n-1;i++) {
		ans[i]=left[i-1]*right[i+1];
	}
	return ans;
}

int main() {
	int n;
	cin>>n;
	std::vector<int> v;
	for(int i=0;i<n;i++) {
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	for(int i:arrayProduct2(v))
		cout<<i<<" ";
	return 0;
}