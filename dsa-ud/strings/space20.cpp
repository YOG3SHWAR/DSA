#include<bits/stdc++.h>
using namespace std;

void replaceSpace(char* str) {
	int spaces=0;
	for(int i=0;str[i]!='\0';i++)
		if(str[i]==' ')
			spaces++;
	int index=strlen(str)+2*spaces;
	str[index]='\0';
	for(int i=strlen(str)-1;i>=0;i--) {
		if(str[i]==' ') {
			str[index-1]='0';
			str[index-2]='2';
			str[index-3]='%';
			index-=3;
		} else {
			str[index-1]=str[i];
			index--;
		}
	}
}

int main() {
	char input[1000]= "I am grateful to Sudha for all her love and affection.";
	// cin.getline(input,1000);
	replaceSpace(input);
	cout<<input;
	return 0;
}