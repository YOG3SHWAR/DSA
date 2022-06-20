#include <bits/stdc++.h>
using namespace std;

string uniqueSubstring(string s) {
	unordered_map<char, int> map;
	int i=0;
	int j=0;
	int n=s.length();
	int window=0;
	int maxWindow=0;
	int startWindiow=-1;
	while(j<n) {
		if(map.find(s[j])!=map.end() && map[s[j]]>i) {
			i=map[s[j]]+1;
			window=j-i;
		}
		map[s[j]]=j;
		window++;
		j++;
		if(window>maxWindow) {
			maxWindow=window;
			startWindiow=i;
		}
	}
	return s.substr(startWindiow, maxWindow);
}

int main() {
	string input;
	getline(cin, input);
	cout<<uniqueSubstring(input);
	return 0;
}