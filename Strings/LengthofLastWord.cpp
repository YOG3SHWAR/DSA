int Solution::lengthOfLastWord(const string A) {
    int len = 0;
    int i = A.length() - 1;
    while(A[i] == ' ' && i >= 0)
        i--;
    for(; i >= 0; i--){
        if(A[i] == ' ')
            return len;
        len++;
    }
    return len;
}
