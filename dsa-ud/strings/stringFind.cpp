#include<bits/stdc++.h>
using namespace std;

int main() {

	string paragraph="I am so grateful for Sudha, she is the best thing that has happened to me. I love her so much!!";
	string word;
	getline(cin, word);
	int index=0;
	int occurrence=0;
	while(index<paragraph.length()-1) {
		index=paragraph.find(word,index+1);
		if(index==-1)
			break;
		cout<<"occurrence "<<occurrence<<" at: "<<index<<endl;
	}
	return 0;
}