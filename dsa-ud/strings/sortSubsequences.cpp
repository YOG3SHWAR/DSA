#include<bits/stdc++.h>
using namespace std;

void sortSubsequences(string s, string output, vector<string> &v) {
	if(s.length()==0){
		v.push_back(output);
		return;
	}
	char ch=s[0];
	string reducedInput=s.substr(1);
	sortSubsequences(reducedInput, output+ch, v);
	sortSubsequences(reducedInput, output, v);
}

bool compare(string s1, string s2) {
	if(s1.length()==s2.length())
		return s1<s2;
	return s1.length()<s2.length();
}

int main() {
	string input;
	getline(cin, input);
	vector<string> v;
	sortSubsequences(input, "", v);
	sort(v.begin(), v.end(), compare);
	for(auto i: v)
		cout<<i<<",";
	return 0;
}

/*
sample input-
sudha
output-
,a,d,h,s,u,da,dh,ha,sa,sd,sh,su,ua,ud,uh,dha,sda,sdh,sha,sua,sud,suh,uda,udh,uha,sdha,suda,sudh,suha,udha,sudha,
*/