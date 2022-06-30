#include <bits/stdc++.h>
using namespace std;

int sparse_search(string arr[], int n, string search) {
	int s=0;
	int e=n-1;
	while(s<=e) {
		int mid=(s+e)/2;
		// update mid to point to nearest non empty string
		int i=mid+1;
		int j=mid-1;
		if(arr[mid]=="") {
			while(1) {
				if(i>e && j<s)
					return -1;
				if(arr[i]!=""){
					mid=i;
					break;
				}
				if(arr[j]!="") {
					mid=j;
					break;
				}
				i++;
				j--;
			}
		}
		if(arr[mid]==search)
			return mid;
		if(arr[mid]>search) {
			e=mid-1;
		}
		if(arr[mid]<search) {
			s=mid+1;
		}
		

	}
	return -1;
}

int main(int argc, char const *argv[]) {
	string arr[]={"ai","","","bat","","","car","cat","","","dog","e"};
	int n=12;
	cout<<sparse_search(arr,n,"bat");
	return 0;
}