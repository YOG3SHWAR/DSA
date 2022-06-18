#include <bits/stdc++.h>
using namespace std;

int main() {
	char input[1000];
	cin.getline(input, 1000);
	// cout<<strtok(input, " ")<<"\n"; // this function internally maintains a state of string
	// cout<<strtok(input, " ")<<"\n"; // that we passed in the last call
	// cout<<strtok(input, " ")<<"\n"; // by making a static varialbe
	char* token=strtok(input," ");
	while(token!=NULL) {
		cout<<token<<"\n";
		token=strtok(NULL, " ");
	}
	return 0;
}