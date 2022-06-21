#include<bits/stdc++.h>
using namespace std;

string smallestWindow(string str){
    
    int FP[256] = {0};
    int FS[256] = {0};
    int min_so_far = INT_MAX; //large number
    int length = 0;
    int cnt = 0;
    int window_size;
    int start = 0; //left contraction
    int start_idx = -1;
    
    for(auto c:str)
        FP[c]=1;
    
    for(auto i:FP)
        length+=i;

    for(int i=0;i<str.length();i++){
        char ch = str[i];
        FS[ch]++;
        if(FS[ch]==1){ //
            // if we are seeing this character for the first time we will update the count
            cnt++;
        }
        // if we have cnt == length then we have found a window and we can start contracting from left 
        // to remove unwanted characters from the window
        if(cnt == length){
            //removing unwanted characters
            while(FS[str[start]]!=1){
                FS[str[start]]--;
                start++;
            }
            //noting the window size
            window_size = i-start+1;
            if (window_size < min_so_far)
                {
                    min_so_far = window_size;
                    start_idx = start;
                }
        }
    }
    return str.substr(start_idx, min_so_far);
}

int main(){
    string str = "aabcbcdbcaaad";
    string sub = smallestWindow(str);
    cout<<sub;
    return 0;
}