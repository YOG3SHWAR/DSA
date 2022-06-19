#include<bits/stdc++.h>
using namespace std;

string normalize(const string &sentence) {
    string copy = sentence;
    //Make the changes in copy, and return it
	if(copy[0]>='a' && copy[0]<='z')
		copy[0]-=32;
	for(int i=1;i<copy.length();i++) {
		if(copy[i-1]==' ')
			if(copy[i]>='A' && copy[i]<='Z')
				continue;
			else
				copy[i]-=32;
		else if(copy[i]>='A' && copy[i]<='Z')
			copy[i]+=32;
	}  
    return copy;
}

int main() {
	string input;
	getline(cin,input);
	cout<<normalize(input);
	return 0;
}


/*
sample input-
this is SO MUCH FUN!
output-
This Is So Much Fun!
*/