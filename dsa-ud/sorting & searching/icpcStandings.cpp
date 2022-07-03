#include <bits/stdc++.h>
using namespace std;

bool compare(pair<string,int> a, pair<string,int> b) {
	return a.second<b.second;
}

// O(NlogN)
int badness(vector<pair<string,int> > teams){
    //Complete this function to return the min badness
    sort(teams.begin(), teams.end(), compare);
    int bad=0;
    for(int i=0;i<teams.size();i++) {
    	bad+=abs(teams[i].second-i-1);
    }   
    return bad;
    
}

int main() {
	vector<pair<string,int>> arr = {
		{"WinOrBooze", 1},
		{"BallOfDuty", 2},
		{"WhoKnows", 2},
		{"BholeChature", 1},
		{"DCECoders", 5},
		{"StrangeCase", 7},
		{"WhoKnows", 7}
	};
	cout<<badness(arr);
	return 0;
}

/*
output-
5
*/
