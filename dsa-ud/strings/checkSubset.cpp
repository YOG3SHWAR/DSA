#include<bits/stdc++.h>
using namespace std;

bool checkSubset(string s1, string s2) {
	unordered_map<char, int> map;
	for(char i:s1) map[i]++;
	for(char i:s2) {
		if(map[i]>0) map[i]--;
		else return false;
	}
	return true;
}

int main() {
	string input1;
	string input2;
	getline(cin, input1);
	getline(cin, input2);
	cout<<checkSubset(input1, input2);
	return 0;
}