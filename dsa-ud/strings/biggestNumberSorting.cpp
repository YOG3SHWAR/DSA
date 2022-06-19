#include <bits/stdc++.h>
using namespace std;

bool compare(string s1, string s2) {
	return s1+s2>s2+s1;
}


string biggesNumber(vector<string> v) {
	sort(v.begin(), v.end(), compare);
	string ans="";
	for(auto i: v)
		ans+=i;
	return ans;
}

int main() {
	string input;
	vector<string> v;
	while(getline(cin,input)) {
		v.push_back(input);
	}
	cout<<biggesNumber(v);
 	return 0;
}

/*
sample input-
3
11
20
30
3
output-
33302011
*/