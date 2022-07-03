#include <bits/stdc++.h>
using namespace std;

bool out_of_order(vector<int> arr, int i) {
	int n=arr.size();
	if(n==1)
		return false;
	if(i==0 && arr[i]>arr[i+1])
		return true;
	if(i==(n-1) && arr[i]<arr[i-1])
		return true;
	if((arr[i]>arr[i-1] && arr[i]>arr[i+1]) || (arr[i]<arr[i-1] && arr[i]<arr[i+1]))
		return true;
	return false;
}

pair<int,int> subarraySorting(vector<int> a){
    pair<int,int> p{-1,-1};
    int n = a.size();
    int s,f,maxx,minn;
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1]){
            s = i;
            break;
        }
    }
    for(int i=n-1;i>0;i--){
        if(a[i-1]>a[i]){
            //ft = a[i];
            f = i;
            break;
        }
    }
    maxx = a[s];
    minn = a[s];
    for(int i=s+1;i<=f;i++){
        if(a[i]< minn){
            minn = a[i];
        }
        else if(a[i]> maxx){
            maxx = a[i];
        }
    }
    for(int i=0;i<s;i++){
        if(a[i]> minn){
            s = i;
            break;
        }
    }
    for(int i = n-1;i>0;i--){
        if(a[i]<maxx){
            f = i;
            break;
        }
    }
    p.first = s;
    p.second = f;
    return p;
}

int main() {
	int n;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		arr.push_back(temp);
	}
	pair<int, int> ans=subarraySorting(arr);
	cout<<ans.first<<" "<<ans.second;
	return 0;
}