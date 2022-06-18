#include<bits/stdc++.h>
using namespace std;


string getKey(string s, int key) {
	stringstream ss(s);
	string token;
	while(key>0) {
		key--;
		getline(ss, token, ' ');
	}
	return token;
}

bool sortLexicographic(pair<string, string> a, pair<string, string> b) {
	return a.second<b.second;
}

int convertToInt(string s) {
	int ans=0;
	int p=1;
	for(int i=s.length()-1;i>=0;i--) {
		ans+=((s[i]-'0')*p);
		p*=10;
	}
	return ans;
}

bool sortNumeric(pair<string, string> a, pair<string, string> b) {
	return convertToInt(a.second)<convertToInt(b.second);
}


void keySort(vector<string> arr, int col, bool rev, bool numeric) {

	vector<pair<string, string>> a;

	for(string s: arr)
		a.push_back({s, getKey(s, col)});

	if(numeric)
		sort(a.begin(), a.end(), sortNumeric);
	else
		sort(a.begin(), a.end(), sortLexicographic);

	if(rev)
		reverse(a.begin(), a.end());

	for(auto i: a)
		cout<<i.first<<endl;
}

int main() {
	int n;
	cin>>n;
	cin.get();
	vector<string> input;
	for(int i=0;i<n;i++) {
		string temp;
		getline(cin, temp);
		input.push_back(temp);
	}
	int col;
	bool reverse;
	bool numeric;
	cin>>col>>reverse>>numeric;
	// for(auto i: input) cout<<i<<endl;
	// cout<<col<<" "<<reverse<<" "<<numeric<<endl;
	keySort(input, col, reverse, numeric);
	return 0;
}

/*
sample input-
3
92 022
82 12
77 13
2 0 1
output-
82 12
77 13
92 022
*/