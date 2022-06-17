#include<bits/stdc++.h>
using namespace std;


/*
time complexity = O(NlogN)
space complexity = O(1)
*/
pair<int,int> minDifference(vector<int> a,vector<int> b){
    //Complete this method
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int minDifference=INT_MAX;
    pair<int, int> ans;
    int i=0,j=0;
    while(i<a.size() && j<b.size()) {
    	if(abs(a[i]-b[j])<minDifference) {
    		minDifference=abs(a[i]-b[j]);
    		ans=make_pair(a[i], b[j]);
    	}
    	if(a[i]<=b[j]) i++;
    	else j++;
    }
    return ans;
}

int main() {
	int aSize;
	int bSize;
	cin>>aSize;
	cin>>bSize;
	vector<int> a, b;
	for(int i=0;i<aSize;i++) {
		int temp;
		cin>>temp;
		a.push_back(temp);
	}
	for(int i=0;i<bSize;i++) {
		int temp;
		cin>>temp;
		b.push_back(temp);
	}
	pair<int, int> ans=minDifference(a, b);
	cout<<ans.first<<" "<<ans.second;
	return 0;
}

/*
input-
5 5
23 5 10 17 30
26 134 135 14 19
output-
17 19
*/