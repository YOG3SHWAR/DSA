#include <bits/stdc++.h>
using namespace std;

string lenghtEncoding(string &s) {
	string ans="";
	int count=1;
	int i=1;
	for(;i<s.length();i++) {
		if(s[i]!=s[i-1]) {
			ans+=s[i-1];
			ans+=to_string(count);
			count=0;
		}
		count++;
	}
	ans=ans+s[i-1]+to_string(count);
	return ans;
}

int main() {
	string input;
	getline(cin, input);
	cout<<lenghtEncoding(input);
	return 0;
}


/*
sample input-
aaaabcccccaaa
output-
a4b1c5a3

sample input-
bbbaaaadexxxxxx
output-
b3a4d1e1x6

*/