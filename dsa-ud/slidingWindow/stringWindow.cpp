#include <bits/stdc++.h>
using namespace std;

bool check_freq_map(unordered_map<char,int> sm, unordered_map<char,int> fm) {
	for(auto i: fm) {
		if(sm[i.first] >= i.second)
			continue;
		return false;
	}

	return true;
}

string stringWindow(string s, string pattern) {
	unordered_map<char, int> fm;
	unordered_map<char, int> sm;
	for(auto i:pattern) fm[i]++;
	int i=0;
	int j=0;
	int start_index=-1;
	int window_size=INT_MAX;
	int current_window=0;
	int n=s.length();
	int count=0;
	while(j<n) {
		sm[s[j]]++;
		
		if(fm[s[j]]!=0 && sm[s[j]]<=fm[s[j]])
			count++;

		if(count==pattern.length()) {
			while(fm[s[i]]==0 or sm[s[i]]>fm[s[i]]) {
				sm[s[i]]--;
				i++;
			}
			current_window=j-i+1;
			if(current_window<window_size) {
				window_size=current_window;
				start_index=i;
			}
		}
		j++;
	}
	if(start_index==-1)
		return "No window found";
	cout<<start_index<<" "<<window_size<<endl;
	return s.substr(start_index, window_size);
}

int main() {
	string s;
	string pattern;
	getline(cin, s);
	getline(cin, pattern);
	cout<<stringWindow(s, pattern);
	return 0;
}

/*
sample input-
hello
oel
output-
1 4
ello
*/