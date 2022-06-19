#include <bits/stdc++.h>
using namespace std;

string palindromeBreak(string s) {
	string ans="";
	for(int i=s.length()-1;i>=0;i--) {
		if(s[i]+1<='z') {
			s[i]=s[i]+1;
			ans=s;
			break;
		}
	}
	return ans; 
}

int main() {
	string input;
	getline(cin, input);
	cout<<palindromeBreak(input);
	return 0;
}


/*
sample input-
aa
output-
ab

sample input-
aba
output-
abb

sample input-
zzz
output-
"" empty string
*/