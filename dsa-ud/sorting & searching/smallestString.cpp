#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
	return a+b<b+a;
}

int main() {
	int n;
	cin>>n;
	vector<string> arr;
	for(int i=0;i<n;i++) {
		string temp;
		cin>>temp;
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end(), compare); // using stl library
	for(string s: arr)
		cout<<s;
	return 0;
}


/*
sample input:
3
a
ab
aba
output:
aabaab
sample input:
3
c
cb
cba
output:
cbacbc
*/