#include <bits/stdc++.h>
using namespace std;

int coverttoint(string s) {
	int ans=0;
	int p=1;
	for(int i=s.length()-1;i>=0;i--) {
		ans=ans+(s[i]-'0')*p;
		p*=10;
	}
	return ans;
}


string digitalClock(string s) {
	int time=coverttoint(s);
	int hours=time/60;
	int min=time%60;
	string t="";
	if(hours<10) 
		t=t+'0'+to_string(hours)+":";
	else t=t+to_string(hours)+":";
	if(min<10)
		t=t+'0'+to_string(min);
	else t=t+to_string(min);
	return t;
}

int main() {
	string input;
	getline(cin, input);
	cout<<digitalClock(input);
	return 0;
}


/*
sample input 1-
125
output-
02:05
sample input 2-
1180
output-
19:40
19:40
*/
