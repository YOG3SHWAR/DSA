#include<bits/stdc++.h>
using namespace std;

int main() {
	string input;
	getline(cin,input);

	stringstream ss(input);
	string token;
	std::vector<string> tokens;	
	while(getline(ss, token, ' '))// ' ' is the delimiter, it divides the string where this occurs
		tokens.push_back(token);
	for(string token: tokens)
		cout<<token<<", ";
	return 0;
}