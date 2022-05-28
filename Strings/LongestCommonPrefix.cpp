string Solution::longestCommonPrefix(vector<string> &A) {
    string prefix = "";
    for(int i = 0; i < A[0].length(); i++) {
        char curr = A[0][i];
        for(string s: A) {
            if(curr != s[i])
                return prefix;
        }
        prefix += curr;
    }
    return prefix;
}
